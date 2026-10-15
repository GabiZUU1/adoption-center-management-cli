/********************************************************************************
** Form generated from reading UI file 'UserMenuWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENUWINDOW_H
#define UI_USERMENUWINDOW_H

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

class Ui_UserMenuWindowClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnSeeAll;
    QPushButton *btnSeeBA;
    QPushButton *btnAdoptionList;
    QPushButton *btnAdoptionBr;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnBack;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *UserMenuWindowClass)
    {
        if (UserMenuWindowClass->objectName().isEmpty())
            UserMenuWindowClass->setObjectName("UserMenuWindowClass");
        UserMenuWindowClass->resize(875, 578);
        centralWidget = new QWidget(UserMenuWindowClass);
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
        btnSeeAll = new QPushButton(verticalLayoutWidget);
        btnSeeAll->setObjectName("btnSeeAll");
        btnSeeAll->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        btnSeeAll->setFont(font1);

        verticalLayout_2->addWidget(btnSeeAll);

        btnSeeBA = new QPushButton(verticalLayoutWidget);
        btnSeeBA->setObjectName("btnSeeBA");
        btnSeeBA->setMinimumSize(QSize(0, 60));
        btnSeeBA->setFont(font1);

        verticalLayout_2->addWidget(btnSeeBA);

        btnAdoptionList = new QPushButton(verticalLayoutWidget);
        btnAdoptionList->setObjectName("btnAdoptionList");
        btnAdoptionList->setMinimumSize(QSize(0, 60));
        btnAdoptionList->setFont(font1);

        verticalLayout_2->addWidget(btnAdoptionList);

        btnAdoptionBr = new QPushButton(verticalLayoutWidget);
        btnAdoptionBr->setObjectName("btnAdoptionBr");
        btnAdoptionBr->setMinimumSize(QSize(0, 60));
        btnAdoptionBr->setFont(font1);

        verticalLayout_2->addWidget(btnAdoptionBr);

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


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        UserMenuWindowClass->setCentralWidget(centralWidget);

        retranslateUi(UserMenuWindowClass);
        QObject::connect(btnSeeAll, SIGNAL(clicked()), UserMenuWindowClass, SLOT(btnSeeAll_clicked()));
        QObject::connect(btnSeeBA, SIGNAL(clicked()), UserMenuWindowClass, SLOT(btnSeeBA_clicked()));
        QObject::connect(btnAdoptionList, SIGNAL(clicked()), UserMenuWindowClass, SLOT(btnAdoptionList_clicked()));
        QObject::connect(btnAdoptionBr, SIGNAL(clicked()), UserMenuWindowClass, SLOT(btnAdoptionBr_clicked()));
        QObject::connect(btnBack, SIGNAL(clicked()), UserMenuWindowClass, SLOT(btnBack_clicked()));

        QMetaObject::connectSlotsByName(UserMenuWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *UserMenuWindowClass)
    {
        UserMenuWindowClass->setWindowTitle(QCoreApplication::translate("UserMenuWindowClass", "UserMenuWindow", nullptr));
        label->setText(QCoreApplication::translate("UserMenuWindowClass", "Welcome to the adoption center, User!", nullptr));
        btnSeeAll->setText(QCoreApplication::translate("UserMenuWindowClass", "See all dogs", nullptr));
        btnSeeBA->setText(QCoreApplication::translate("UserMenuWindowClass", "See dogs based on breed and age", nullptr));
        btnAdoptionList->setText(QCoreApplication::translate("UserMenuWindowClass", "See the adoption list", nullptr));
        btnAdoptionBr->setText(QCoreApplication::translate("UserMenuWindowClass", "See the adoption list in an external app", nullptr));
        btnBack->setText(QCoreApplication::translate("UserMenuWindowClass", "Go back", nullptr));
        label_2->setText(QCoreApplication::translate("UserMenuWindowClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMenuWindowClass: public Ui_UserMenuWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENUWINDOW_H
