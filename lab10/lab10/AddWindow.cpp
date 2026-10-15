#include "AddWindow.h"
#include "Exceptions.h"
#include "DataValidator.h"
#include <string>
#include <QIntValidator>
#include <QCloseEvent>
#include <QPalette>
#include <QShortcut>

AddWindow::AddWindow(AdminService& aServ, DogModel* model, QWidget* parent)
	: QMainWindow(parent), admServ(aServ), model{ model }
{
	ui.setupUi(this);

	ui.leAge->setValidator(new QIntValidator(-100, 100, this));

	connect(ui.leName, &QLineEdit::textChanged, this, &AddWindow::leName_textChanged);

	QShortcut* undoShort = new QShortcut(QKeySequence("Ctrl+Z"), this);
	QShortcut* redoShort = new QShortcut(QKeySequence("Ctrl+Y"), this);
	QObject::connect(undoShort, &QShortcut::activated, this,
		[this]()
		{
			if (!this->admServ.undoesAvailable()) return;
			this->admServ.performUndo();
		}
	);
	QObject::connect(redoShort, &QShortcut::activated, this,
		[this]()
		{
			if (!this->admServ.redoesAvailable()) return;
			this->admServ.performRedo();
		}
	);
}

AddWindow::~AddWindow()
{
}

void AddWindow::resetLES()
{
	std::vector<QLineEdit*> les = { ui.leAge, ui.leBreed, ui.leName, ui.lePhotograph };
	for (auto l : les)
	{
		l->clear();
		l->setPalette(QPalette());
	}
}

void AddWindow::btnCancel_clicked()
{
	this->resetLES();
	this->hide();
}

void AddWindow::btnAdd_clicked()
{
	try
	{
		std::string name = ui.leName->text().toStdString();
		std::string breed = ui.leBreed->text().toStdString();
		int age = ui.leAge->text().toInt();
		std::string photo = ui.lePhotograph->text().toStdString();

		this->admServ.addDog(name, breed, age, photo);

		this->model->refresh();
		this->resetLES();
		this->hide();
	}
	catch (InvalidInputException e)
	{
		ui.lblError->setText(e.what());
		return;
	}
}

void AddWindow::leName_textChanged()
{
	std::string name = ui.leName->text().toStdString();
	if (!DataValidator().isNameValid(name))
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

void AddWindow::leBreed_textChanged()
{
	std::string breed = ui.leBreed->text().toStdString();
	if (!DataValidator().isBreedValid(breed, true))
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

void AddWindow::leAge_textChanged()
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

void AddWindow::lePhotograph_textChanged()
{
	std::string photo = ui.lePhotograph->text().toStdString();
	if (!DataValidator().isPhotographValid(photo))
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

void AddWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	this->resetLES();
	event->ignore();
}

