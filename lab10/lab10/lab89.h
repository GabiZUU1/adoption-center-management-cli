#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_lab89.h"
#include "IFileManager.h"
#include "AdminService.h"
#include "UserService.h"
#include "DogModel.h"
#include "AdoptedDogModel.h"

class lab89 : public QMainWindow
{
    Q_OBJECT

private:
    Ui::lab89Class ui;
    AdminService& admServ;
    UserService& usrServ;
    DogModel* model;
    AdoptedDogModel* modelA;
public:
    IFileManager*& fm;

public:
    lab89(AdminService& aServ, UserService& uServ, DogModel* model, AdoptedDogModel* modelA, IFileManager*& fileManager, QWidget *parent = nullptr);
    ~lab89();

private slots:
    void btnDone_pressed();
};

