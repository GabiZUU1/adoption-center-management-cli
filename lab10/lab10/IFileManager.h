#pragma once
#include <vector>
#include <string>
#include "Dog.h"

using std::vector, std::string;

class IFileManager
{
public:
	virtual void setFileName(string name) = 0;
	virtual void saveToFile(vector<Dog> dogs) = 0;
	virtual void saveToFile(vector<Dog> dogs, string fileName) = 0;
	virtual ~IFileManager() = default;
};