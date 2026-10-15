#include "ViewAdoptedWindow.h"
#include <QCloseEvent>
#include "AdoptedDogModel.h"

ViewAdoptedWindow::ViewAdoptedWindow(UserService& uServ, AdoptedDogModel* model, QWidget* parent)
	: QMainWindow(parent), uServ{ uServ }, model{ model }
{
	ui.setupUi(this);

	ui.tbl->setModel(this->model);
	ui.tbl->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

ViewAdoptedWindow::~ViewAdoptedWindow()
{
}

void ViewAdoptedWindow::btnBack_clicked()
{
	this->hide();
}

void ViewAdoptedWindow::tbl_doubleClicked(const QModelIndex& index)
{
}

void ViewAdoptedWindow::closeEvent(QCloseEvent* event)
{
	this->hide();
	event->ignore();
}

void ViewAdoptedWindow::showEvent(QShowEvent* event)
{
	this->model->reload();
	QMainWindow::showEvent(event);
}

