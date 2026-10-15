#include "UpdateWindow.h"
#include <QShortcut>

UpdateWindow::UpdateWindow(AdminService& aServ, DogModel* model, QWidget* parent)
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

UpdateWindow::~UpdateWindow()
{
}

void UpdateWindow::btnDone_clicked()
{
	this->hide();
}

void UpdateWindow::tbl_doubleClicked(const QModelIndex& index)
{
	if (this->updWindow == nullptr)
		this->updWindow = new UpdateDogWindow(this->model, this->admServ, this);

	this->updWindow->setRow(index.row());
	this->updWindow->show();
}

void UpdateWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}

