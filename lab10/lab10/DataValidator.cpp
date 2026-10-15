#include <string>
#include "DataValidator.h"

using std::string;

bool DataValidator::isNameValid(string& name)
{
    if (name.size() == 0 || name == "ok") return false;
    return true;
}

bool DataValidator::isBreedValid(string& breed, bool checkLength)
{
    if (breed.size() == 0 && checkLength) return false;
    return true;
}

bool DataValidator::isAgeValid(int& age)
{
    if (age < 0) return false;
    return true;
}

bool DataValidator::isPhotographValid(string& photograph)
{
    if (photograph.size() == 0) return false;
    if (!photograph._Starts_with("https://")) return false;
    return true;
}
