#pragma once

#include <QMainWindow>
#include "ui_AdminMenuWindow.h"
#include "AddWindow.h"
#include "DeleteWindow.h"
#include "UpdateWindow.h"
#include "SeeAllWindow.h"
#include "DogModel.h"
#include "AdminService.h"
#include "UserService.h"

class AdminMenuWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::AdminMenuWindowClass ui;
	AdminService& admServ;
	UserService& usrServ;
	DogModel* model;

	AddWindow* addWindow = nullptr;
	DeleteWindow* delWindow = nullptr;
	UpdateWindow* updWindow = nullptr;
	SeeAllWindow* salWindow = nullptr;

public:
	AdminMenuWindow(AdminService& aServ, UserService& uServ, DogModel* model, QWidget *parent = nullptr);
	~AdminMenuWindow();

private slots:
	void btnAdd_clicked();
	void btnDelete_clicked();
	void btnUpdate_clicked();
	void btnSeeAll_clicked();
	void btnBack_clicked();

	void btnUndo_clicked();
	void btnRedo_clicked();
	void tick();

protected:
	void closeEvent(QCloseEvent* event) override;
};

