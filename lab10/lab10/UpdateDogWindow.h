#pragma once

#include <QMainWindow>
#include "DogModel.h"
#include "ui_UpdateDogWindow.h"
#include "AdminService.h"
#include "Dog.h"

class UpdateDogWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::UpdateDogWindowClass ui;
	AdminService& admServ;
	DogModel* model;
	int currentRow = -1;

public:
	UpdateDogWindow(DogModel* model, AdminService& aServ, QWidget *parent = nullptr);
	~UpdateDogWindow();

	void setRow(int row);

private slots:
	void loadData();

	void btnAdd_clicked();
	void btnCancel_clicked();
	void leName_textChanged();
	void leBreed_textChanged();
	void leAge_textChanged();
	void lePhotograph_textChanged();

protected:
	void showEvent(QShowEvent* event);
	void closeEvent(QCloseEvent* event);
};

