#pragma once

#include <string>

using std::string;

class DataValidator
{
public:
	static bool isNameValid(string& name);
	static bool isBreedValid(string& breed, bool checkLength);
	static bool isAgeValid(int& age);
	static bool isPhotographValid(string& photograph);
};

