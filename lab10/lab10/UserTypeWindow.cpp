#include "UserTypeWindow.h"
#include "AdminMenuWindow.h"
#include "UserMenuWindow.h"
#include <QCloseEvent>

UserTypeWindow::UserTypeWindow(AdminService& aServ, UserService& uServ, DogModel* model, AdoptedDogModel* modelA, QWidget* parent)
	: QMainWindow(parent), admServ(aServ), usrServ(uServ), model{ model }, modelA{ modelA }
{
	ui.setupUi(this);
	ui.rbAdmin->setChecked(true);
}

UserTypeWindow::~UserTypeWindow()
{
}

void UserTypeWindow::closeEvent(QCloseEvent* event)
{
	this->close();
	qApp->quit();
}

void UserTypeWindow::btnDone_clicked()
{
	if (ui.rbAdmin->isChecked())
	{
		if (this->admWin == nullptr)
			this->admWin = new AdminMenuWindow(this->admServ, this->usrServ, this->model, this);
		this->admWin->show();

		this->hide();
		return;
	}
	else if (ui.rbUser->isChecked())
	{
		if (this->usrWin == nullptr)
			this->usrWin = new UserMenuWindow(this->admServ, this->usrServ, this->modelA, this);
		this->usrWin->show();

		this->hide();
		return;
	}
	else return;
}