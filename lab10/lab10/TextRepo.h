#pragma once

#include <vector>
#include <string>
#include "IRepo.h"
#include "Dog.h"

using std::vector, std::string;

class TextRepo : public IRepo
{
private:
	string path;
	vector<Dog> dogs;
	vector<Dog> adoptedDogs;

	void readFromFile();
	void saveToFile();

public:
	TextRepo(string pathToFile);

	vector<Dog>& getDogs() override;
	Dog& getDogAtPosition(int position) override;

	void addDog(Dog& dog) override;
	void deleteDog(vector<Dog>::iterator iterator) override;
	void updateDog(int dogPos, string name, string breed, int age, string photo) override;
	void setDogAdopted(int dogPos) override;
};