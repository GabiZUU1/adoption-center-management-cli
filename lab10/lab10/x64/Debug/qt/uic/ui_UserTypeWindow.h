/********************************************************************************
** Form generated from reading UI file 'UserTypeWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTYPEWINDOW_H
#define UI_USERTYPEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserTypeWindowClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *rbAdmin;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QRadioButton *rbUser;
    QPushButton *btnDone;

    void setupUi(QMainWindow *UserTypeWindowClass)
    {
        if (UserTypeWindowClass->objectName().isEmpty())
            UserTypeWindowClass->setObjectName("UserTypeWindowClass");
        UserTypeWindowClass->resize(604, 141);
        centralWidget = new QWidget(UserTypeWindowClass);
        centralWidget->setObjectName("centralWidget");
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 581, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rbAdmin = new QRadioButton(gridLayoutWidget);
        rbAdmin->setObjectName("rbAdmin");
        QFont font;
        font.setPointSize(16);
        rbAdmin->setFont(font);

        gridLayout->addWidget(rbAdmin, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        rbUser = new QRadioButton(gridLayoutWidget);
        rbUser->setObjectName("rbUser");
        rbUser->setFont(font);

        gridLayout->addWidget(rbUser, 1, 2, 1, 1);

        btnDone = new QPushButton(gridLayoutWidget);
        btnDone->setObjectName("btnDone");

        gridLayout->addWidget(btnDone, 2, 1, 1, 1);

        UserTypeWindowClass->setCentralWidget(centralWidget);

        retranslateUi(UserTypeWindowClass);
        QObject::connect(btnDone, SIGNAL(clicked()), UserTypeWindowClass, SLOT(btnDone_clicked()));

        QMetaObject::connectSlotsByName(UserTypeWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *UserTypeWindowClass)
    {
        UserTypeWindowClass->setWindowTitle(QCoreApplication::translate("UserTypeWindowClass", "UserTypeWindow", nullptr));
        rbAdmin->setText(QCoreApplication::translate("UserTypeWindowClass", "Admin mode", nullptr));
        label->setText(QCoreApplication::translate("UserTypeWindowClass", "Select the mode you want to use the app in:", nullptr));
        rbUser->setText(QCoreApplication::translate("UserTypeWindowClass", "User mode", nullptr));
        btnDone->setText(QCoreApplication::translate("UserTypeWindowClass", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserTypeWindowClass: public Ui_UserTypeWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTYPEWINDOW_H
