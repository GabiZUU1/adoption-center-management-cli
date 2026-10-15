/********************************************************************************
** Form generated from reading UI file 'BreedAgeFilterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREEDAGEFILTERWINDOW_H
#define UI_BREEDAGEFILTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BreedAgeFilterWindowClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *leBreed;
    QLineEdit *leAge;
    QPushButton *btnBack;
    QPushButton *btnSearch;

    void setupUi(QMainWindow *BreedAgeFilterWindowClass)
    {
        if (BreedAgeFilterWindowClass->objectName().isEmpty())
            BreedAgeFilterWindowClass->setObjectName("BreedAgeFilterWindowClass");
        BreedAgeFilterWindowClass->resize(804, 146);
        QFont font;
        font.setPointSize(16);
        BreedAgeFilterWindowClass->setFont(font);
        centralWidget = new QWidget(BreedAgeFilterWindowClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 581, 41));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 61, 31));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 100, 61, 31));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        leBreed = new QLineEdit(centralWidget);
        leBreed->setObjectName("leBreed");
        leBreed->setGeometry(QRect(100, 60, 231, 31));
        leAge = new QLineEdit(centralWidget);
        leAge->setObjectName("leAge");
        leAge->setGeometry(QRect(100, 100, 113, 31));
        btnBack = new QPushButton(centralWidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(380, 60, 141, 61));
        btnSearch = new QPushButton(centralWidget);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(570, 60, 141, 61));
        BreedAgeFilterWindowClass->setCentralWidget(centralWidget);

        retranslateUi(BreedAgeFilterWindowClass);
        QObject::connect(btnBack, SIGNAL(clicked()), BreedAgeFilterWindowClass, SLOT(btnBack_pressed()));
        QObject::connect(btnSearch, SIGNAL(clicked()), BreedAgeFilterWindowClass, SLOT(btnSearch_pressed()));
        QObject::connect(leBreed, SIGNAL(textChanged(QString)), BreedAgeFilterWindowClass, SLOT(leBreed_textChanged()));
        QObject::connect(leAge, SIGNAL(textChanged(QString)), BreedAgeFilterWindowClass, SLOT(leAge_textChanged()));

        QMetaObject::connectSlotsByName(BreedAgeFilterWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *BreedAgeFilterWindowClass)
    {
        BreedAgeFilterWindowClass->setWindowTitle(QCoreApplication::translate("BreedAgeFilterWindowClass", "BreedAgeFilterWindow", nullptr));
        label->setText(QCoreApplication::translate("BreedAgeFilterWindowClass", "Type the breed and the age you want to filter by!", nullptr));
        label_2->setText(QCoreApplication::translate("BreedAgeFilterWindowClass", "Breed:", nullptr));
        label_3->setText(QCoreApplication::translate("BreedAgeFilterWindowClass", "Age:", nullptr));
        btnBack->setText(QCoreApplication::translate("BreedAgeFilterWindowClass", "Go back", nullptr));
        btnSearch->setText(QCoreApplication::translate("BreedAgeFilterWindowClass", "Start search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BreedAgeFilterWindowClass: public Ui_BreedAgeFilterWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BREEDAGEFILTERWINDOW_H
