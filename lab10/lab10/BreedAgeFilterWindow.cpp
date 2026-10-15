#include "BreedAgeFilterWindow.h"
#include "DataValidator.h"
#include "Dog.h"
#include <vector>
#include <string>
#include <QIntValidator>
#include <QCloseEvent>
#include <QPalette>

BreedAgeFilterWindow::BreedAgeFilterWindow(UserService& uServ, QWidget* parent)
	: QMainWindow(parent), usrServ(uServ)
{
	ui.setupUi(this);
	ui.leAge->setValidator(new QIntValidator(-100, 100, this));
}

BreedAgeFilterWindow::~BreedAgeFilterWindow()
{
}

void BreedAgeFilterWindow::leAge_textChanged()
{
	int age = ui.leAge->text().toInt();
	if (!DataValidator().isAgeValid(age))
	{
		QPalette qp = ui.leAge->palette();
		qp.setColor(QPalette::Base, QColor(255, 0, 0));
		ui.leAge->setPalette(qp);
	}
	else
	{
		QPalette qp = ui.leAge->palette();
		qp.setColor(QPalette::Base, QColor(255, 255, 255));
		ui.leAge->setPalette(qp);
	}
}

void BreedAgeFilterWindow::leBreed_textChanged()
{
	std::string breed = ui.leBreed->text().toStdString();
	if (!DataValidator().isBreedValid(breed, false))
	{
		QPalette qp = ui.leBreed->palette();
		qp.setColor(QPalette::Base, QColor(255, 0, 0));
		ui.leBreed->setPalette(qp);
	}
	else
	{
		QPalette qp = ui.leBreed->palette();
		qp.setColor(QPalette::Base, QColor(255, 255, 255));
		ui.leBreed->setPalette(qp);
	}
}

void BreedAgeFilterWindow::btnBack_pressed()
{
	this->hide();
}

void BreedAgeFilterWindow::btnSearch_pressed()
{
	if (ui.leAge->text().isEmpty())
	{
		ui.label->setText("You cant leave the age field empty!");
		return;
	}

	std::string breed = ui.leBreed->text().toStdString();
	int age = ui.leAge->text().toInt();

	if (!DataValidator().isAgeValid(age) || !DataValidator().isBreedValid(breed, false))
	{
		ui.label->setText("Either the breed or age is invalid!!");
		return;
	}

	std::vector<Dog> filtered = this->usrServ.filterDogs(breed, age);

	if (this->sadWindow == nullptr)
		this->sadWindow = new SeeAllAdoptWindow(this->usrServ);

	this->sadWindow->setCustomList(filtered);
	this->sadWindow->show();
}

void BreedAgeFilterWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}

