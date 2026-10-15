#include "DeleteDogCommand.h"

void DeleteDogCommand::execute()
{
	this->admServ.deleteDog(this->dog);
}

void DeleteDogCommand::undo()
{
	this->admServ.addDog(this->dog.getName(), this->dog.getBreed(), this->dog.getAge(), this->dog.getPhotograph());
}
