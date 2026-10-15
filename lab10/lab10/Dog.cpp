#include <iostream>
#include <string>
#include <istream>
#include "Dog.h"
#include "DataValidator.h"
#include "Exceptions.h"

using std::string, std::istream, std::ostream, std::getline;

Dog::Dog() :
	name{ "" }, breed{ "" }, age{ 0 }, photograph{ "" }, adopted{ false }
{
}

Dog::Dog(string name, string breed, int age, string photograph) :
	name{ name }, breed{ breed }, age{ age }, photograph{ photograph }, adopted{ false }
{
}

bool Dog::operator==(const Dog& other) const
{
	if (this->getName() == other.getName() &&
		this->getBreed() == other.getBreed() &&
		this->getAge() == other.getAge() &&
		this->getPhotograph() == other.getPhotograph())
		return true;
	return false;
}

#pragma region Getters and setters
string Dog::getName() const
{
	return this->name;
}

void Dog::setName(string newName)
{
	if (!DataValidator::isNameValid(newName))
	{
		throw InvalidArgumentException("The new name is invalid!");
	}
	this->name = newName;
}

string Dog::getBreed() const
{
	return this->breed;
}

void Dog::setBreed(string newBreed)
{
	if (!DataValidator::isBreedValid(newBreed, true))
	{
		throw InvalidArgumentException("The new breed is invalid!");
	}
	this->breed = newBreed;
}

int Dog::getAge() const
{
	return this->age;
}

void Dog::setAge(int newAge)
{
	if (!DataValidator::isAgeValid(newAge))
	{
		throw InvalidArgumentException("The new age is invalid!");
	}
	this->age = newAge;
}

string Dog::getPhotograph() const
{
	return this->photograph;
}

void Dog::setPhotograph(string newPhotograph)
{
	if (!DataValidator::isPhotographValid(newPhotograph))
	{
		throw InvalidArgumentException("The new photograph is invalid!");
	}
	this->photograph = newPhotograph;
}
bool Dog::isAdopted() const
{
	return this->adopted;
}
void Dog::setAdopted(bool flag)
{
	this->adopted = flag;
}
#pragma endregion

istream& operator>>(istream& in, Dog& dog)
{
	string name, breed, photo;
	int age, adopted;
	
	if (getline(in, name, ',') &&
		getline(in, breed, ',') &&
		in >> age &&
		in.ignore() &&
		getline(in, photo)
		)
	{
		dog.name = name;
		dog.breed = breed;
		dog.age = age;
		dog.photograph = photo;
	}

	return in;
}

ostream& operator<<(ostream& out, const Dog& dog)
{
	out << dog.getName() << "," << dog.getBreed() << "," << dog.getAge() << "," << dog.getPhotograph() << "\n";
	return out;
}
