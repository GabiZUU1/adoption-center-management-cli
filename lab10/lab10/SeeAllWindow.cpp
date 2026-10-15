#include "SeeAllWindow.h"
#include <QCloseEvent>
#include <QShowEvent>

SeeAllWindow::SeeAllWindow(AdminService& aServ, QWidget* parent)
	: QMainWindow(parent), admServ(aServ)
{
	ui.setupUi(this);
}

SeeAllWindow::~SeeAllWindow()
{
}

void SeeAllWindow::loadCurrentDog()
{
	Dog& d = this->admServ.getDogAtPosition(this->currentIndex);
	
	ui.lblName->setText(d.getName().c_str());
	ui.lblBreed->setText(d.getBreed().c_str());
	ui.lblAge->setText(std::to_string(d.getAge()).c_str());
	ui.lblPhoto->setText(d.getPhotograph().c_str());
}

void SeeAllWindow::btnBack_clicked()
{
	this->hide();
}

void SeeAllWindow::btnPhoto_clicked()
{
	std::string l = "explorer " + this->admServ.getDogAtPosition(this->currentIndex).getPhotograph();
	system(l.c_str());
}

void SeeAllWindow::btnNext_clicked()
{
	this->currentIndex++;
	if (this->currentIndex == this->admServ.getVector().size())
		this->currentIndex = 0;

	this->loadCurrentDog();
}

void SeeAllWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}

void SeeAllWindow::showEvent(QShowEvent* event)
{
	this->currentIndex = 0;
	this->loadCurrentDog();

	QMainWindow::showEvent(event);
}

