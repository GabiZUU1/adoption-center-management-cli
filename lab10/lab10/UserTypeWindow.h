#pragma once
#include <UserMenuWindow.h>
#include <AdminMenuWindow.h>
#include "AdoptedDogModel.h"
#include <QMainWindow>
#include <QCloseEvent>
#include "DogModel.h"
#include "ui_UserTypeWindow.h"
#include "AdminService.h"
#include "UserService.h"

class UserTypeWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::UserTypeWindowClass ui;
	AdminService& admServ;
	UserService& usrServ;
	DogModel* model;
	AdoptedDogModel* modelA;

	AdminMenuWindow* admWin = nullptr;
	UserMenuWindow* usrWin = nullptr;

public:
	UserTypeWindow(AdminService& aServ, UserService& uServ, DogModel* model, AdoptedDogModel* modelA, QWidget* parent = nullptr);
	~UserTypeWindow();

private slots:
	void btnDone_clicked();

protected:
	void closeEvent(QCloseEvent* event) override;
};

