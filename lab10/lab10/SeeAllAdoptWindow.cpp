#include "SeeAllAdoptWindow.h"
#include "Dog.h"
#include <vector>
#include <QCloseEvent>
#include <QShowEvent>

SeeAllAdoptWindow::SeeAllAdoptWindow(UserService& uServ, QWidget* parent)
	: QMainWindow(parent), usrServ(uServ)
{
	ui.setupUi(this);
}

SeeAllAdoptWindow::~SeeAllAdoptWindow()
{}

void SeeAllAdoptWindow::setCustomList(std::vector<Dog> custom)
{
	this->customList = custom;
}

void SeeAllAdoptWindow::loadCurrentDog()
{
	std::vector<Dog> dogs;
	if (this->customList.empty())
	{
		dogs = this->usrServ.getUnAdoptedDogs();
	}
	else
	{
		dogs = this->customList;
	}

	Dog d = dogs[this->currentIndex];

	ui.lblName->setText(d.getName().c_str());
	ui.lblBreed->setText(d.getBreed().c_str());
	ui.lblAge->setText(std::to_string(d.getAge()).c_str());
	ui.lblPhoto->setText(d.getPhotograph().c_str());
}

void SeeAllAdoptWindow::btnBack_clicked()
{
	this->hide();
}

void SeeAllAdoptWindow::btnView_clicked()
{
	std::string l = "explorer " + ui.lblPhoto->text().toStdString();
	system(l.c_str());
}

void SeeAllAdoptWindow::btnAdopt_clicked()
{
	this->usrServ.adoptDog(this->usrServ.getUnAdoptedDogs()[this->currentIndex]);

	this->currentIndex = 0;
	this->loadCurrentDog();
}

void SeeAllAdoptWindow::btnNext_clicked()
{
	this->currentIndex++;
	if (this->currentIndex == this->usrServ.getUnAdoptedDogs().size())
		this->currentIndex = 0;

	this->loadCurrentDog();
}

void SeeAllAdoptWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}

void SeeAllAdoptWindow::showEvent(QShowEvent* event)
{
	this->currentIndex = 0;
	this->loadCurrentDog();
	QMainWindow::showEvent(event);
}

