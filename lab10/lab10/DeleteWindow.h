#pragma once

#include <QMainWindow>
#include <QCloseEvent>
#include "ui_DeleteWindow.h"
#include "AdminService.h"
#include "DogModel.h"

class DeleteWindow : public QMainWindow
{
	Q_OBJECT

public:
	DeleteWindow(AdminService& aServ, DogModel* model, QWidget *parent = nullptr);
	~DeleteWindow();

private:
	Ui::DeleteWindowClass ui;
	AdminService& admServ;
	DogModel* model;

private slots:
	void btnDone_clicked();
	void tbl_doubleClicked(const QModelIndex& index);

protected:
	void closeEvent(QCloseEvent* event) override;
};

