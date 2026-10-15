#pragma once

#include <vector>
#include <string>
#include "IRepo.h"
#include "Dog.h"

using std::vector, std::string;

class MemoryRepo : public IRepo
{
private:
	vector<Dog> dogs;
	vector<Dog> adoptedDogs;

public:
	MemoryRepo(vector<Dog>& dogs) : dogs{ dogs }, adoptedDogs{ dogs.size() } {};
	MemoryRepo(int size) { dogs.reserve(size); adoptedDogs.reserve(size); };

	vector<Dog>& getDogs() override;
	Dog& getDogAtPosition(int position) override;

	void addDog(Dog& dog) override;
	void deleteDog(vector<Dog>::iterator iterator) override;
	void updateDog(int dogPos, string name, string breed, int age, string photo) override;
	void setDogAdopted(int dogPos) override;
};

