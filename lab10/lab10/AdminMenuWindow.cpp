#include "AdminMenuWindow.h"
#include <UserTypeWindow.h>
#include <qevent.h>
#include <QCloseEvent>
#include <QTimer>
#include <QPalette>
#include <QShortcut>

AdminMenuWindow::AdminMenuWindow(AdminService& aServ, UserService& uServ, DogModel* model, QWidget* parent)
	: QMainWindow(parent), admServ(aServ), usrServ(uServ), model{ model }
{
	ui.setupUi(this);

	QShortcut* undoShort = new QShortcut(QKeySequence("Ctrl+Z"), this);
	QShortcut* redoShort = new QShortcut(QKeySequence("Ctrl+Y"), this);
	QObject::connect(undoShort, &QShortcut::activated, this, &AdminMenuWindow::btnUndo_clicked);
	QObject::connect(redoShort, &QShortcut::activated, this, &AdminMenuWindow::btnRedo_clicked);
}

AdminMenuWindow::~AdminMenuWindow()
{
}

void AdminMenuWindow::btnAdd_clicked()
{
	if (this->addWindow == nullptr)
		this->addWindow = new AddWindow(this->admServ, model);
	this->addWindow->show();
}

void AdminMenuWindow::btnDelete_clicked()
{
	if (this->delWindow == nullptr)
		this->delWindow = new DeleteWindow(this->admServ, model);
	this->delWindow->show();
}

void AdminMenuWindow::btnUpdate_clicked()
{
	if (this->updWindow == nullptr)
		this->updWindow = new UpdateWindow(this->admServ, model);
	this->updWindow->show();
}

void AdminMenuWindow::btnSeeAll_clicked()
{
	if (this->salWindow == nullptr)
		this->salWindow = new SeeAllWindow(this->admServ);
	this->salWindow->show();
}

void AdminMenuWindow::btnBack_clicked()
{
	this->hide();
	this->parentWidget()->show();
}

void AdminMenuWindow::btnUndo_clicked()
{
	if (!this->admServ.undoesAvailable())
	{
		QString baseText = "Welcome to the Adoption Center, Admin!";
		QPalette prevPalette = ui.label->palette();

		QPalette errorPalette = prevPalette;
		errorPalette.setColor(QPalette::WindowText, Qt::red);

		ui.btnUndo->setDisabled(true);
		ui.label->setPalette(errorPalette);
		ui.label->setText("There are no undoes available!");

		QTimer::singleShot(1500, this,
			[this, baseText, prevPalette]()
			{
				ui.label->setPalette(prevPalette);
				ui.label->setText(baseText);
				ui.btnUndo->setDisabled(false);
			});
		return;
	}

	this->admServ.performUndo();
	this->model->refresh();
}

void AdminMenuWindow::btnRedo_clicked()
{
	if (!this->admServ.redoesAvailable())
	{
		QString baseText = "Welcome to the Adoption Center, Admin!";
		QPalette prevPalette = ui.label->palette();

		QPalette errorPalette = prevPalette;
		errorPalette.setColor(QPalette::WindowText, Qt::red);

		ui.btnRedo->setDisabled(true);
		ui.label->setPalette(errorPalette);
		ui.label->setText("There are no redoes available!");

		QTimer::singleShot(1500, this,
			[this, baseText, prevPalette]()
			{
				ui.label->setPalette(prevPalette);
				ui.label->setText(baseText);
				ui.btnRedo->setDisabled(false);
			});
		return;
	}

	this->admServ.performRedo();
	this->model->refresh();
}

void AdminMenuWindow::tick()
{
}

void AdminMenuWindow::closeEvent(QCloseEvent* event)
{
	qApp->quit();
	event->accept();
}