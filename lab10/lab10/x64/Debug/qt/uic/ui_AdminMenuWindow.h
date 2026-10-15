/********************************************************************************
** Form generated from reading UI file 'AdminMenuWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENUWINDOW_H
#define UI_ADMINMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenuWindowClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnUpdate;
    QPushButton *btnSeeAll;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnBack;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnUndo;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRedo;

    void setupUi(QMainWindow *AdminMenuWindowClass)
    {
        if (AdminMenuWindowClass->objectName().isEmpty())
            AdminMenuWindowClass->setObjectName("AdminMenuWindowClass");
        AdminMenuWindowClass->resize(875, 578);
        centralWidget = new QWidget(AdminMenuWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 861, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnAdd = new QPushButton(verticalLayoutWidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        btnAdd->setFont(font1);

        verticalLayout_2->addWidget(btnAdd);

        btnDelete = new QPushButton(verticalLayoutWidget);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setMinimumSize(QSize(0, 60));
        btnDelete->setFont(font1);

        verticalLayout_2->addWidget(btnDelete);

        btnUpdate = new QPushButton(verticalLayoutWidget);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setMinimumSize(QSize(0, 60));
        btnUpdate->setFont(font1);

        verticalLayout_2->addWidget(btnUpdate);

        btnSeeAll = new QPushButton(verticalLayoutWidget);
        btnSeeAll->setObjectName("btnSeeAll");
        btnSeeAll->setMinimumSize(QSize(0, 60));
        btnSeeAll->setFont(font1);

        verticalLayout_2->addWidget(btnSeeAll);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_2);

        btnBack = new QPushButton(verticalLayoutWidget);
        btnBack->setObjectName("btnBack");
        btnBack->setMinimumSize(QSize(0, 60));
        btnBack->setFont(font1);

        verticalLayout_2->addWidget(btnBack);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnUndo = new QPushButton(verticalLayoutWidget);
        btnUndo->setObjectName("btnUndo");
        btnUndo->setMinimumSize(QSize(0, 60));
        btnUndo->setFont(font1);

        horizontalLayout_2->addWidget(btnUndo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnRedo = new QPushButton(verticalLayoutWidget);
        btnRedo->setObjectName("btnRedo");
        btnRedo->setMinimumSize(QSize(0, 60));
        btnRedo->setFont(font1);

        horizontalLayout_2->addWidget(btnRedo);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        AdminMenuWindowClass->setCentralWidget(centralWidget);

        retranslateUi(AdminMenuWindowClass);
        QObject::connect(btnAdd, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnAdd_clicked()));
        QObject::connect(btnDelete, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnDelete_clicked()));
        QObject::connect(btnUpdate, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnUpdate_clicked()));
        QObject::connect(btnSeeAll, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnSeeAll_clicked()));
        QObject::connect(btnBack, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnBack_clicked()));
        QObject::connect(btnUndo, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnUndo_clicked()));
        QObject::connect(btnRedo, SIGNAL(clicked()), AdminMenuWindowClass, SLOT(btnRedo_clicked()));

        QMetaObject::connectSlotsByName(AdminMenuWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMenuWindowClass)
    {
        AdminMenuWindowClass->setWindowTitle(QCoreApplication::translate("AdminMenuWindowClass", "AdminMenuWindow", nullptr));
        label->setText(QCoreApplication::translate("AdminMenuWindowClass", "Welcome to the adoption center, Admin!", nullptr));
        btnAdd->setText(QCoreApplication::translate("AdminMenuWindowClass", "Add dog", nullptr));
        btnDelete->setText(QCoreApplication::translate("AdminMenuWindowClass", "Delete dog", nullptr));
        btnUpdate->setText(QCoreApplication::translate("AdminMenuWindowClass", "Update dog", nullptr));
        btnSeeAll->setText(QCoreApplication::translate("AdminMenuWindowClass", "See all dogs", nullptr));
        btnBack->setText(QCoreApplication::translate("AdminMenuWindowClass", "Go back", nullptr));
        label_2->setText(QCoreApplication::translate("AdminMenuWindowClass", "TextLabel", nullptr));
        btnUndo->setText(QCoreApplication::translate("AdminMenuWindowClass", "Undo", nullptr));
        btnRedo->setText(QCoreApplication::translate("AdminMenuWindowClass", "Redo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenuWindowClass: public Ui_AdminMenuWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENUWINDOW_H
