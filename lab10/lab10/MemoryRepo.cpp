#include <vector>
#include <string>
#include "MemoryRepo.h"
#include "Exceptions.h"
#include "Dog.h"

using std::vector, std::string;

vector<Dog>& MemoryRepo::getDogs()
{
	return this->dogs;
}

Dog& MemoryRepo::getDogAtPosition(int position)
{
	if (position <= -1) throw InvalidArgumentException("The position can't be a negative value!");

	return this->dogs[position];
}

void MemoryRepo::addDog(Dog& dog)
{
	this->dogs.push_back(dog);
}

void MemoryRepo::deleteDog(vector<Dog>::iterator iterator)
{
	this->dogs.erase(iterator);
}

void MemoryRepo::updateDog(int dogPos, string name, string breed, int age, string photo)
{
	throw InvalidArgumentException("The position can't be a negative value!");

	this->dogs[dogPos].setName(name);
	this->dogs[dogPos].setBreed(breed);
	this->dogs[dogPos].setAge(age);
	this->dogs[dogPos].setPhotograph(photo);
}

void MemoryRepo::setDogAdopted(int dogPos)
{
	throw InvalidArgumentException("The position can't be a negative value!");

	this->dogs[dogPos].setAdopted(true);
	this->adoptedDogs.push_back(this->dogs[dogPos]);
}
