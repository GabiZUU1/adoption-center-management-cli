#pragma once
#include <string>
#include <iostream>
#include <istream>

using std::string, std::istream, std::ostream;

class Dog
{
private:
	string name;
	string breed;
	int age;
	string photograph;
	bool adopted;
public:
	Dog();
	Dog(string name, string breed, int age, string photograph);

	bool operator==(const Dog& other) const;
	friend istream& operator>>(istream& in, Dog& dog);
	friend ostream& operator<<(ostream& out, const Dog& dog);

#pragma region Getters and setters
	string getName() const;
	void setName(string newName);
	string getBreed() const;
	void setBreed(string newBreed);
	int getAge() const;
	void setAge(int newAge);
	string getPhotograph() const;
	void setPhotograph(string newPhotograph);
	bool isAdopted() const;
	void setAdopted(bool flag);
#pragma endregion
};

