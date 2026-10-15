#include "AddDogCommand.h"

void AddDogCommand::execute()
{
	this->admServ.addDog(this->dog.getName(), this->dog.getBreed(), this->dog.getAge(), this->dog.getPhotograph());
}

void AddDogCommand::undo()
{
	this->admServ.deleteDog(this->dog);
}
