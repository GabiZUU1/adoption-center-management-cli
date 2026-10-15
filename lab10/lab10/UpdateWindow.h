#pragma once

#include <QMainWindow>
#include <QCloseEvent>
#include <QModelIndex>
#include "AdminService.h"
#include "DogModel.h"
#include "UpdateDogWindow.h"
#include "ui_UpdateWindow.h"

class UpdateWindow : public QMainWindow
{
	Q_OBJECT

public:
	UpdateWindow(AdminService& aServ, DogModel* model, QWidget *parent = nullptr);
	~UpdateWindow();

private:
	Ui::UpdateWindowClass ui;
	UpdateDogWindow* updWindow = nullptr;
	AdminService& admServ;
	DogModel* model;

private slots:
	void btnDone_clicked();
	void tbl_doubleClicked(const QModelIndex& index);

protected:
	void closeEvent(QCloseEvent* event) override;
};

