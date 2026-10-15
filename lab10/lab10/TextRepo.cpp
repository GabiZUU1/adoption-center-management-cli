#include <vector>
#include <string>
#include <fstream>
#include "TextRepo.h"
#include "Exceptions.h"
#include "Dog.h"

using std::ifstream, std::ofstream, std::string, std::vector;

void TextRepo::readFromFile()
{
	ifstream fin(this->path);
	if (!fin.is_open()) throw FileException("Can't open the file at the path: " + this->path);

	Dog d;
	while (fin >> d)
	{
		this->dogs.push_back(d);
	}

	fin.close();
}

void TextRepo::saveToFile()
{
	ofstream fout(this->path);
	if (!fout.is_open()) throw FileException("Can't open the file at the path: " + this->path);

	for (auto d : this->dogs)
	{
		fout << d;
	}

	fout.close();
}

TextRepo::TextRepo(string pathToFile) :
	path{ pathToFile }
{
	this->readFromFile();
}

vector<Dog>& TextRepo::getDogs()
{
	return this->dogs;
}

Dog& TextRepo::getDogAtPosition(int position)
{
	if (position <= -1) throw InvalidArgumentException("The position can't be a negative value!");

	return this->dogs[position];
}

void TextRepo::addDog(Dog& dog)
{
	this->dogs.push_back(dog);
	this->saveToFile();
}

void TextRepo::deleteDog(vector<Dog>::iterator iterator)
{
	this->dogs.erase(iterator);
	this->saveToFile();
}

void TextRepo::updateDog(int dogPos, string name, string breed, int age, string photo)
{
	if (dogPos <= -1) throw InvalidArgumentException("The position can't be a negative value!");

	this->dogs[dogPos].setName(name);
	this->dogs[dogPos].setBreed(breed);
	this->dogs[dogPos].setAge(age);
	this->dogs[dogPos].setPhotograph(photo);

	this->saveToFile();
}

void TextRepo::setDogAdopted(int dogPos)
{
	if (dogPos <= -1) throw InvalidArgumentException("The position can't be a negative value!");

	this->dogs[dogPos].setAdopted(true);
	this->adoptedDogs.push_back(this->dogs[dogPos]);
}