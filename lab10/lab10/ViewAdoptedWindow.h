#pragma once

#include <QMainWindow>
#include "AdoptedDogModel.h"
#include "UserService.h"
#include "ui_ViewAdoptedWindow.h"

class ViewAdoptedWindow : public QMainWindow
{
	Q_OBJECT

public:
	ViewAdoptedWindow(UserService& uServ, AdoptedDogModel* model, QWidget *parent = nullptr);
	~ViewAdoptedWindow();

private:
	Ui::ViewAdoptedWindowClass ui;
	UserService& uServ;
	AdoptedDogModel* model;

private slots:
	void btnBack_clicked();
	void tbl_doubleClicked(const QModelIndex& index);

protected:
	void closeEvent(QCloseEvent* event) override;
	void showEvent(QShowEvent* event) override;
};

