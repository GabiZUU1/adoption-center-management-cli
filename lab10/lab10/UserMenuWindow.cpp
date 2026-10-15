#include "UserMenuWindow.h"
#include "UserTypeWindow.h"
#include "lab89.h"
#include "AdoptedDogModel.h"
#include <QCloseEvent>

UserMenuWindow::UserMenuWindow(AdminService& aServ, UserService& uServ, AdoptedDogModel* model, QWidget* parent)
	: QMainWindow(parent), admServ(aServ), usrServ(uServ), model{ model }
{
	ui.setupUi(this);
}

UserMenuWindow::~UserMenuWindow()
{
}

void UserMenuWindow::btnSeeAll_clicked()
{
	if (this->sadWindow == nullptr)
		this->sadWindow = new SeeAllAdoptWindow(this->usrServ);
	this->sadWindow->show();
}

void UserMenuWindow::btnSeeBA_clicked()
{
	if (this->bafWindow == nullptr)
		this->bafWindow = new BreedAgeFilterWindow(this->usrServ);
	this->bafWindow->show();
}

void UserMenuWindow::btnAdoptionList_clicked()
{
	if (this->vaWindow == nullptr)
		this->vaWindow = new ViewAdoptedWindow(this->usrServ, this->model);
	this->vaWindow->show();
}

void UserMenuWindow::btnAdoptionBr_clicked()
{
	((lab89*)((UserTypeWindow*)this->parentWidget())->parentWidget())->fm->saveToFile(this->usrServ.getAdoptedDogs(), "adopted");
}

void UserMenuWindow::btnBack_clicked()
{
	this->parentWidget()->show();
	this->hide();
}

void UserMenuWindow::closeEvent(QCloseEvent* event)
{
	qApp->exit();
	event->accept();
}