#pragma once
#include "ICommand.h"
#include "AdminService.h"
#include "Dog.h"
class DeleteDogCommand :
	public ICommand
{
private:
	AdminService& admServ;
	Dog dog;

public:
	DeleteDogCommand(AdminService& aServ, Dog d) : admServ{ aServ }, dog{ d } {};
	void execute() override;
	void undo() override;
};

