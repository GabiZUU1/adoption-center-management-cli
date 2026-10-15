#include "lab89.h"
#include "AdminService.h"
#include "UserService.h"
#include "IFileManager.h"
#include "CSVFileManager.h"
#include "HTMLFileManager.h"
#include "UserTypeWindow.h"

lab89::lab89(AdminService& aServ, UserService& uServ, DogModel* model, AdoptedDogModel* modelA, IFileManager*& fileManager, QWidget* parent)
	: QMainWindow(parent), admServ(aServ), usrServ(uServ), model{ model }, modelA{ modelA }, fm(fileManager)
{
	ui.setupUi(this);
	connect(ui.btnDone, &QPushButton::clicked, this, &lab89::btnDone_pressed);
	ui.rbCSV->setChecked(true);
}

lab89::~lab89()
{
}

void lab89::btnDone_pressed()
{
	if (ui.rbCSV->isChecked())
	{
		this->fm = new CSVFileManager();
		this->fm->setFileName("list");
	}
	else if (ui.rbHTML->isChecked())
	{
		this->fm = new HTMLFileManager();
		this->fm->setFileName("list");
	}
	else return;

	UserTypeWindow* window2 = new UserTypeWindow(this->admServ, this->usrServ, this->model, this->modelA, this);
	window2->show();
	this->hide();
}