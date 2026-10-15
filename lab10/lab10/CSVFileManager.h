#pragma once

#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Dog.h"
#include "Exceptions.h"
#include "IFileManager.h"

using std::vector, std::ofstream, std::string;

class CSVFileManager : public IFileManager
{
private:
	string fileName;

public:
	void setFileName(string name) override
	{
		this->fileName = name;
		this->fileName += ".csv";
	}

	void saveToFile(vector<Dog> dogs, string fileName) override
	{
		string temp = this->fileName;
		this->fileName = fileName + ".csv";
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

		for (auto d : dogs)
		{
			fout << d;
		}
		fout.close();

		string ss = "notepad " + fileName;
		system(ss.c_str());
	}
};