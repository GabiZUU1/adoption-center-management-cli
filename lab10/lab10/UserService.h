#pragma once

#include <string>
#include <vector>
#include "IRepo.h"
#include "Dog.h"

using std::vector;

class UserService
{
private:
	IRepo& repo;
public:
	UserService(IRepo& repository);

	void adoptDog(Dog& dog);
	vector<Dog> getUnAdoptedDogs();
	vector<Dog> getAdoptedDogs();
	vector<Dog> filterDogs(string breed, int age);
};

