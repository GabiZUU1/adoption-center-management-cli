#pragma once

#include <QMainWindow>
#include "ui_BreedAgeFilterWindow.h"
#include "UserService.h"
#include "SeeAllAdoptWindow.h"

class BreedAgeFilterWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::BreedAgeFilterWindowClass ui;
	UserService& usrServ;

	SeeAllAdoptWindow* sadWindow = nullptr;

public:
	BreedAgeFilterWindow(UserService& uServ, QWidget *parent = nullptr);
	~BreedAgeFilterWindow();

private slots:
	void leAge_textChanged();
	void leBreed_textChanged();
	void btnBack_pressed();
	void btnSearch_pressed();

protected:
	void closeEvent(QCloseEvent* event) override;
};

