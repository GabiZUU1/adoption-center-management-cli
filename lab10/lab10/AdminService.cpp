#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include "Exceptions.h"
#include "DataValidator.h"
#include "IRepo.h"
#include "AdminService.h"
#include "Dog.h"
#include "AddDogCommand.h"
#include "DeleteDogCommand.h"
#include "UpdateDogCommand.h"

using std::string, std::invalid_argument, std::vector, std::find, std::back_inserter,
std::distance, std::copy_if, std::find_if, std::tolower, std::transform, std::to_string;

AdminService::AdminService(IRepo& repository) :
	repo{ repository }
{
}

vector<Dog> AdminService::getVector()
{
	return this->repo.getDogs();
}

vector<Dog> AdminService::getDogsSameName(vector<Dog>& dogVector, string name)
{
	vector<Dog> newDogs;

	transform(name.begin(), name.end(), name.begin(), tolower);
	copy_if(dogVector.begin(), dogVector.end(), back_inserter(newDogs),
		[name](Dog d) {
			string dName = d.getName();
			transform(dName.begin(), dName.end(), dName.begin(), tolower);
			return dName == name;
		}
	);

	return newDogs;
}

vector<Dog> AdminService::getDogsSameBreed(vector<Dog>& dogVector, string breed)
{
	vector<Dog> newDogs;

	transform(breed.begin(), breed.end(), breed.begin(), tolower);
	copy_if(dogVector.begin(), dogVector.end(), back_inserter(newDogs),
		[breed](Dog d) {
			string dBreed = d.getBreed();
			transform(dBreed.begin(), dBreed.end(), dBreed.begin(), tolower);
			return dBreed == breed;
		}
	);

	return newDogs;
}

Dog AdminService::getDogUnique(string name, string breed, int age)
{
	transform(name.begin(), name.end(), name.begin(), tolower);
	transform(breed.begin(), breed.end(), breed.begin(), tolower);

	auto dogs = this->repo.getDogs();
	auto it = find_if(dogs.begin(), dogs.end(),
		[name, breed, age](Dog d) {
			string dName = d.getName();
			transform(dName.begin(), dName.end(), dName.begin(), tolower);

			string dBreed = d.getBreed();
			transform(dBreed.begin(), dBreed.end(), dBreed.begin(), tolower);

			return dName == name && dBreed == breed && d.getAge() == age;
		}
	);

	if (it == dogs.end())
	{
		throw DogNotFoundException("No dog was found with the name: " + name +
			", breed: " + breed + " and age: " + to_string(age));
	}
	return *it;
}

Dog& AdminService::getDogAtPosition(int position)
{
	if (position < 0)
		throw InvalidArgumentException("The position can't be a negative value!");

	return this->repo.getDogAtPosition(position);
}

bool AdminService::checkDogExists(string name, string breed, int age)
{
	transform(name.begin(), name.end(), name.begin(), tolower);
	transform(breed.begin(), breed.end(), breed.begin(), tolower);

	auto dogs = this->repo.getDogs();
	auto it = find_if(dogs.begin(), dogs.end(),
		[name, breed, age](Dog d) {
			string dName = d.getName();
			transform(dName.begin(), dName.end(), dName.begin(), tolower);

			string dBreed = d.getBreed();
			transform(dBreed.begin(), dBreed.end(), dBreed.begin(), tolower);

			return dName == name && dBreed == breed && d.getAge() == age;
		}
	);

	if (it == dogs.end())
	{
		return false;
	}
	return true;
}

void AdminService::addDog(string name, string breed, int age, string photograph)
{
	if (!DataValidator::isNameValid(name))
		throw InvalidInputException("The name you introduced is invalid!");
	if (!DataValidator::isBreedValid(breed, true))
		throw InvalidInputException("The breed you introduced is invalid!");
	if (!DataValidator::isAgeValid(age))
		throw InvalidInputException("The age you introduced is invalid!");
	if (!DataValidator::isPhotographValid(photograph))
		throw InvalidInputException("The photograph link you introduced is invalid!");
	if (this->checkDogExists(name, breed, age))
		throw InvalidInputException("An dog with this name, breed and age already exists!");

	Dog d = Dog(name, breed, age, photograph);

	if (this->recordingActions)
	{
		this->undoStack.push(std::make_unique<AddDogCommand>(*this, d));
		this->redoStack = std::stack<std::unique_ptr<ICommand>>();
	}

	this->repo.addDog(d);
}

void AdminService::deleteDog(Dog& dog)
{
	vector<Dog>& vec = this->repo.getDogs();
	auto it = find(vec.begin(), vec.end(), dog);
	if (it == vec.end())
		throw DogNotFoundException("The dog you wanted to delete was not found in the list!");

	if (this->recordingActions)
	{
		this->undoStack.push(std::make_unique<DeleteDogCommand>(*this, *it));
		this->redoStack = std::stack<std::unique_ptr<ICommand>>();
	}

	this->repo.deleteDog(it);
}

void AdminService::updateDog(Dog& dog, string name, string breed, int age, string photograph)
{
	if (!DataValidator::isNameValid(name))
		throw InvalidInputException("The name you introduced is invalid!");
	if (!DataValidator::isBreedValid(breed, true))
		throw InvalidInputException("The breed you introduced is invalid!");
	if (!DataValidator::isAgeValid(age))
		throw InvalidInputException("The age you introduced is invalid!");
	if (!DataValidator::isPhotographValid(photograph))
		throw InvalidInputException("The photograph link you introduced is invalid!");
	if (this->checkDogExists(name, breed, age))
		throw InvalidInputException("An dog with this name, breed and age already exist!");

	auto& dogs = this->repo.getDogs();
	auto it = find(dogs.begin(), dogs.end(), dog);
	int dist = distance(dogs.begin(), it);

	if (this->recordingActions)
	{
		this->undoStack.push(std::make_unique<UpdateDogCommand>(*this, dog, Dog(name, breed, age, photograph)));
		this->redoStack = std::stack<std::unique_ptr<ICommand>>();
	}

	this->repo.updateDog(dist, name, breed, age, photograph);
}

void AdminService::performUndo()
{
	auto cmd = std::move(this->undoStack.top());
	this->undoStack.pop();
	this->recordingActions = false;
	cmd->undo();
	this->recordingActions = true;
	this->redoStack.push(std::move(cmd));
}

void AdminService::performRedo()
{
	auto cmd = std::move(this->redoStack.top());
	this->redoStack.pop();
	this->recordingActions = false;
	cmd->execute();
	this->recordingActions = true;
	this->undoStack.push(std::move(cmd));
}

bool AdminService::undoesAvailable()
{
	return !this->undoStack.empty();
}

bool AdminService::redoesAvailable()
{
	return !this->redoStack.empty();
}
