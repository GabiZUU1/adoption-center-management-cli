#pragma once

#include <string>
#include <vector>
#include <stack>
#include <memory>
#include "IRepo.h"
#include "Dog.h"
#include "ICommand.h"

using std::string, std::vector;

class AdminService
{
private:
	IRepo& repo;
	std::stack<std::unique_ptr<ICommand>> undoStack;
	std::stack<std::unique_ptr<ICommand>> redoStack;

public:
	bool recordingActions = true;

	AdminService(IRepo& repository);

	vector<Dog> getVector();
	/// <summary>
	/// Gets the dogs with the same given name from a given vector of dogs.
	/// </summary>
	/// <param name="dogVector">The vectors of dogs to search in.</param>
	/// <param name="name">The name to search for.</param>
	/// <returns>Returns a new list of dogs.</returns>
	vector<Dog> getDogsSameName(vector<Dog>& dogVector, string name);
	/// <summary>
	/// Gets the dogs with the same given breed from a given vector of dogs.
	/// </summary>
	/// <param name="dogVector">The vectors of dogs to search in.</param>
	/// <param name="breed">The breed to search for.</param>
	/// <returns>Returns a new list of dogs.</returns>
	vector<Dog> getDogsSameBreed(vector<Dog>& dogVector, string breed);

	/// <summary>
	/// Returns a unique dog. A dog is unique is its name, breed and age are unique from others.
	/// </summary>
	/// <param name="name">The name of the target dog.</param>
	/// <param name="breed">The breed of the target dog.</param>
	/// <param name="age">The age of the target dog.</param>
	/// <returns>The unique dog based on the parameters.</returns>
	Dog getDogUnique(string name, string breed, int age);
	/// <summary>
	/// Returns a reference to a dog on a given position from the originial vector of dogs.
	/// </summary>
	/// <param name="position">The position to search for.</param>
	/// <returns>A reference to the dog.</returns>
	Dog& getDogAtPosition(int position);

	bool checkDogExists(string name, string breed, int age);

	void addDog(string name, string breed, int age, string photograph);
	void deleteDog(Dog& dog);
	void updateDog(Dog& dog, string name, string breed, int age, string photograph);

	void performUndo();
	void performRedo();

	bool undoesAvailable();
	bool redoesAvailable();
};