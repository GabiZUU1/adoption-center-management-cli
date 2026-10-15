#pragma once

#include <QMainWindow>
#include "ui_UserMenuWindow.h"
#include "SeeAllAdoptWindow.h"
#include "BreedAgeFilterWindow.h"
#include "ViewAdoptedWindow.h"
#include "AdoptedDogModel.h"
#include "AdminService.h"
#include "UserService.h"

class UserMenuWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::UserMenuWindowClass ui;
	AdminService& admServ;
	UserService& usrServ;
	AdoptedDogModel* model;

	SeeAllAdoptWindow* sadWindow = nullptr;
	BreedAgeFilterWindow* bafWindow = nullptr;
	ViewAdoptedWindow* vaWindow = nullptr;

public:
	UserMenuWindow(AdminService& aServ, UserService& uServ, AdoptedDogModel* model, QWidget* parent = nullptr);
	~UserMenuWindow();

private slots:
	void btnSeeAll_clicked();
	void btnSeeBA_clicked();
	void btnAdoptionList_clicked();
	void btnAdoptionBr_clicked();
	void btnBack_clicked();

protected:
	void closeEvent(QCloseEvent* event) override;
};