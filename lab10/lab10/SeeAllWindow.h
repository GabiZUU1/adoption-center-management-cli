#pragma once

#include <QMainWindow>
#include "ui_SeeAllWindow.h"

#include "AdminService.h"
#include "Dog.h"

class SeeAllWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::SeeAllWindowClass ui;
	AdminService& admServ;
	int currentIndex;

public:
	SeeAllWindow(AdminService& aServ, QWidget *parent = nullptr);
	~SeeAllWindow();

private slots:
	void loadCurrentDog();

	void btnBack_clicked();
	void btnPhoto_clicked();
	void btnNext_clicked();

protected:
	void closeEvent(QCloseEvent* event) override;
	void showEvent(QShowEvent* event) override;
};

