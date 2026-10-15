#pragma once

#include <vector>
#include <string>
#include "Dog.h"

using std::vector, std::string;

class IRepo
{
public:
	virtual vector<Dog>& getDogs() = 0;
	virtual Dog& getDogAtPosition(int position) = 0;

	virtual void addDog(Dog& dog) = 0;
	virtual void deleteDog(vector<Dog>::iterator iterator) = 0;
	virtual void updateDog(int dogPos, string name, string breed, int age, string photo) = 0;
	virtual void setDogAdopted(int dogPos) = 0;
};

