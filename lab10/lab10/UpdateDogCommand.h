#pragma once
#include "ICommand.h"
#include "AdminService.h"
#include "Dog.h"
class UpdateDogCommand :
	public ICommand
{
private:
	AdminService& admServ;
	Dog oldDog;
	Dog newDog;

public:
	UpdateDogCommand(AdminService& aServ, Dog oldDog, Dog newDog) :
		admServ{ aServ }, oldDog{ oldDog }, newDog{ newDog } {
	};
	void execute() override;
	void undo() override;
};
