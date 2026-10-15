#include "UpdateDogCommand.h"

void UpdateDogCommand::execute()
{
	this->admServ.updateDog(this->oldDog, this->newDog.getName(), this->newDog.getBreed(),
		this->newDog.getAge(), this->newDog.getPhotograph());
}

void UpdateDogCommand::undo()
{
	this->admServ.updateDog(this->newDog, this->oldDog.getName(), this->oldDog.getBreed(),
		this->oldDog.getAge(), this->oldDog.getPhotograph());
}
