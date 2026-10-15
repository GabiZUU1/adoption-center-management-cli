#include "UpdateDogWindow.h"
#include "UpdateWindow.h"
#include "DataValidator.h"
#include "Exceptions.h"
#include <QCloseEvent>
#include <QShowEvent>
#include <string>
#include <QPalette>
#include <QIntValidator>

UpdateDogWindow::UpdateDogWindow(DogModel* model, AdminService& aServ, QWidget* parent)
	: QMainWindow(parent), admServ(aServ), model{ model }
{
	ui.setupUi(this);

	ui.leAge->setValidator(new QIntValidator(-100, 100, this));
}

UpdateDogWindow::~UpdateDogWindow()
{
}

void UpdateDogWindow::setRow(int row)
{
	this->currentRow = row;
}

void UpdateDogWindow::btnAdd_clicked()
{
	try
	{
		std::string name = ui.leName->text().toStdString();
		std::string breed = ui.leBreed->text().toStdString();
		int age = ui.leAge->text().toInt();
		std::string photo = ui.lePhotograph->text().toStdString();

		this->model->updateDogAtRow(this->currentRow, name, breed, age, photo);
		this->hide();
	}
	catch (InvalidInputException e)
	{
		ui.lblError_2->setText(e.what());
	}
}

void UpdateDogWindow::btnCancel_clicked()
{
	this->hide();
}

void UpdateDogWindow::leName_textChanged()
{
	std::string name = ui.leName->text().toStdString();
	if (!DataValidator::isNameValid(name))
	{
		QPalette qp = ui.leName->palette();
		qp.setColor(QPalette::Base, QColor(255, 0, 0));
		ui.leName->setPalette(qp);
	}
	else
	{
		QPalette qp = ui.leName->palette();
		qp.setColor(QPalette::Base, QColor(255, 255, 255));
		ui.leName->setPalette(qp);
	}
}

void UpdateDogWindow::leBreed_textChanged()
{
	std::string breed = ui.leBreed->text().toStdString();
	if (!DataValidator::isBreedValid(breed, true))
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

void UpdateDogWindow::leAge_textChanged()
{
	int age = ui.leAge->text().toInt();
	if (!DataValidator::isAgeValid(age))
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

void UpdateDogWindow::lePhotograph_textChanged()
{
	std::string photo = ui.lePhotograph->text().toStdString();
	if (!DataValidator::isPhotographValid(photo))
	{
		QPalette qp = ui.lePhotograph->palette();
		qp.setColor(QPalette::Base, QColor(255, 0, 0));
		ui.lePhotograph->setPalette(qp);
	}
	else
	{
		QPalette qp = ui.lePhotograph->palette();
		qp.setColor(QPalette::Base, QColor(255, 255, 255));
		ui.lePhotograph->setPalette(qp);
	}
}

void UpdateDogWindow::loadData()
{
	if (this->currentRow < 0) return;

	ui.leName->setText(this->model->index(currentRow, 0).data().toString());
	ui.leBreed->setText(this->model->index(currentRow, 1).data().toString());
	ui.leAge->setText(this->model->index(currentRow, 2).data().toString());
	ui.lePhotograph->setText(this->model->index(currentRow, 3).data().toString());
}

void UpdateDogWindow::showEvent(QShowEvent* event)
{
	this->loadData();
	QMainWindow::showEvent(event);
}

void UpdateDogWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}

