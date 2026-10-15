#pragma once

#include <QMainWindow>
#include <vector>
#include "ui_SeeAllAdoptWindow.h"

#include "UserService.h"

class SeeAllAdoptWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::SeeAllAdoptWindowClass ui;
	std::vector<Dog> customList = {};
	UserService& usrServ;

	int currentIndex;

public:
	SeeAllAdoptWindow(UserService& uServ, QWidget* parent = nullptr);
	~SeeAllAdoptWindow();

	void setCustomList(std::vector<Dog> custom);

private slots:
	void loadCurrentDog();

	void btnBack_clicked();
	void btnView_clicked();
	void btnAdopt_clicked();
	void btnNext_clicked();

protected:
	void closeEvent(QCloseEvent* event) override;
	void showEvent(QShowEvent* event) override;
};

