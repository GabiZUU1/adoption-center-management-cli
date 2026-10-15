#pragma once

#include <exception>
#include <string>

using std::exception, std::string;

class CustomException : public exception
{
private:
	string what_message;

public:
	CustomException(string message) : what_message(message) {};

	const char* what() const override
	{
		return this->what_message.c_str();
	}
};

class InvalidInputException : public exception
{
private:
	string what_message;

public:
	InvalidInputException(string message) : what_message(message) {};

	const char* what() const override
	{
		return this->what_message.c_str();
	}
};

class InvalidArgumentException : public exception
{
private:
	string what_message;

public:
	InvalidArgumentException(string message) : what_message(message) {};

	const char* what() const override
	{
		return this->what_message.c_str();
	}
};

class DogNotFoundException : public exception
{
private:
	string what_message;

public:
	DogNotFoundException(string message) : what_message(message) {};

	const char* what() const override
	{
		return this->what_message.c_str();
	}
};

class FileException : public exception
{
private:
	string what_message;

public:
	FileException(string message) : what_message{ message } {};

	const char* what() const override
	{
		return this->what_message.c_str();
	}
};