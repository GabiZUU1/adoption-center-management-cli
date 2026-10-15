#pragma once

#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Dog.h"
#include "IFileManager.h"
#include "Exceptions.h"

using std::vector, std::ofstream, std::string;

class HTMLFileManager : public IFileManager
{
private:
	string fileName;

public:
	void setFileName(string name) override
	{
		this->fileName = name;
		this->fileName += ".html";
	}

	void saveToFile(vector<Dog> dogs, string fileName) override
	{
		string temp = this->fileName;
		this->fileName = fileName + ".html";
		this->save(dogs);
		this->fileName = temp;
	}

	void saveToFile(vector<Dog> dogs) override
	{
		this->save(dogs);
	}

	void save(vector<Dog> dogs)
	{
		ofstream fout(fileName);
		if (!fout.is_open()) throw FileException("Could not open/create the file " + fileName + "!");

		fout << "<!DOCTYPE html>\n";
		fout << "<html>\n";
		fout << "<head>\n";
		fout << "	<title>List</title>\n";
		fout << "</head>\n";
		fout << "<body>\n";
		fout << "<table border=\"1\">\n";
		fout << "	<tr>\n";
		fout << "		<td>Dog Name</td>\n";
		fout << "		<td>Dog Breed</td>\n";
		fout << "		<td>Dog Age</td>\n";
		fout << "		<td>Dog Photograph Link</td>\n";
		fout << "	</tr>\n";
		for (auto d : dogs)
		{
			fout << "		<tr>\n";
			fout << "			<td>" + d.getName() + "</td>\n";
			fout << "			<td>" + d.getBreed() + "</td>\n";
			fout << "			<td>" + std::to_string(d.getAge()) + "</td>\n";
			fout << "			<td><a href=\"" + d.getPhotograph() + "\">Link</a></td>\n";
			fout << "		</tr>\n";
		}
		fout << "</table>\n</body>\n</html>\n";
		fout.close();

		string ss = "explorer " + fileName;
		system(ss.c_str());
	}
};