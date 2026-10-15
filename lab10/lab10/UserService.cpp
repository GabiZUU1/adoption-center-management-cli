#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cctype>z
#include "UserService.h"
#include "IRepo.h"
#include "Dog.h"

using std::find, std::distance, std::copy_if, std::back_inserter, std::tolower, std::transform;

UserService::UserService(IRepo& repository) :
	repo{ repository }
{
}

void UserService::adoptDog(Dog& dog)
{
	auto dogs = this->repo.getDogs();
	auto it = find(dogs.begin(), dogs.end(), dog);
	int dist = distance(dogs.begin(), it);

	this->repo.setDogAdopted(dist);
}

vector<Dog> UserService::getUnAdoptedDogs()
{
	vector<Dog> dogs = this->repo.getDogs();
	vector<Dog> newDogs;

	copy_if(dogs.begin(), dogs.end(), back_inserter(newDogs), [](Dog d) {return !d.isAdopted();});
	return newDogs;
}

vector<Dog> UserService::getAdoptedDogs()
{
	vector<Dog> dogs = this->repo.getDogs();
	vector<Dog> newDogs;

	copy_if(dogs.begin(), dogs.end(), back_inserter(newDogs), [](Dog d) {return d.isAdopted();});
	return newDogs;
}

vector<Dog> UserService::filterDogs(string breed, int age)
{
	transform(breed.begin(), breed.end(), breed.begin(), tolower);

	vector<Dog> dogs = this->repo.getDogs();
	vector<Dog> filtered;

	copy_if(dogs.begin(), dogs.end(), back_inserter(filtered),
		[breed, age](Dog d) {
			string dBreed = d.getBreed();
			transform(dBreed.begin(), dBreed.end(), dBreed.begin(), tolower);

			return (d.getAge() < age && (breed == "" || dBreed == breed));
		}
	);

	return filtered;
}
