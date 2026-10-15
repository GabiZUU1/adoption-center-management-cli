#pragma once
#include "ICommand.h"
#include "AdminService.h"
#include "Dog.h"
class AddDogCommand :
	public ICommand
{
private:
	AdminService& admServ;
	Dog dog;

public:
	AddDogCommand(AdminService& aServ, Dog d) : admServ{ aServ }, dog{ d } {};
	void execute() override;
	void undo() override;
};

