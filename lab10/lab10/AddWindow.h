#pragma once

#include <QMainWindow>
#include "ui_AddWindow.h"
#include "AdminService.h"
#include "DogModel.h"

class AddWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::AddWindowClass ui;
	AdminService& admServ;
	DogModel* model;

public:
	AddWindow(AdminService& aServ, DogModel* model, QWidget *parent = nullptr);
	~AddWindow();

private slots:
	void resetLES();

	void btnCancel_clicked();
	void btnAdd_clicked();
	void leName_textChanged();
	void leBreed_textChanged();
	void leAge_textChanged();
	void lePhotograph_textChanged();

protected:
	void closeEvent(QCloseEvent* event) override;
};

