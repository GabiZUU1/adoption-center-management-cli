#include "DeleteWindow.h"
#include <string>
#include <qabstractitemmodel.h>
#include <QShortcut>

DeleteWindow::DeleteWindow(AdminService& aServ, DogModel* model, QWidget* parent)
	: QMainWindow(parent), admServ{ aServ }, model{ model }
{
	ui.setupUi(this);

	ui.tbl->setModel(this->model);
	ui.tbl->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

	QShortcut* undoShort = new QShortcut(QKeySequence("Ctrl+Z"), this);
	QShortcut* redoShort = new QShortcut(QKeySequence("Ctrl+Y"), this);
	QObject::connect(undoShort, &QShortcut::activated, this,
		[this]()
		{
			if (!this->admServ.undoesAvailable()) return;
			this->admServ.performUndo();
			this->model->refresh();
		}
	);
	QObject::connect(redoShort, &QShortcut::activated, this,
		[this]()
		{
			if (!this->admServ.redoesAvailable()) return;
			this->admServ.performRedo();
			this->model->refresh();
		}
	);
}

DeleteWindow::~DeleteWindow()
{
}

void DeleteWindow::btnDone_clicked()
{
	this->hide();
}

void DeleteWindow::tbl_doubleClicked(const QModelIndex& index)
{
	this->model->deleteDogAtRow(index.row());
}

void DeleteWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}
