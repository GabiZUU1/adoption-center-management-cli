/********************************************************************************
** Form generated from reading UI file 'lab89.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB89_H
#define UI_LAB89_H

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

class Ui_lab89Class
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnDone;
    QRadioButton *rbHTML;
    QLabel *label;
    QRadioButton *rbCSV;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *lab89Class)
    {
        if (lab89Class->objectName().isEmpty())
            lab89Class->setObjectName("lab89Class");
        lab89Class->resize(600, 150);
        centralWidget = new QWidget(lab89Class);
        centralWidget->setObjectName("centralWidget");
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 576, 114));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnDone = new QPushButton(gridLayoutWidget);
        btnDone->setObjectName("btnDone");

        gridLayout->addWidget(btnDone, 2, 1, 1, 1);

        rbHTML = new QRadioButton(gridLayoutWidget);
        rbHTML->setObjectName("rbHTML");
        QFont font;
        font.setPointSize(16);
        rbHTML->setFont(font);

        gridLayout->addWidget(rbHTML, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        rbCSV = new QRadioButton(gridLayoutWidget);
        rbCSV->setObjectName("rbCSV");
        rbCSV->setFont(font);

        gridLayout->addWidget(rbCSV, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        lab89Class->setCentralWidget(centralWidget);

        retranslateUi(lab89Class);

        QMetaObject::connectSlotsByName(lab89Class);
    } // setupUi

    void retranslateUi(QMainWindow *lab89Class)
    {
        lab89Class->setWindowTitle(QCoreApplication::translate("lab89Class", "lab89", nullptr));
        btnDone->setText(QCoreApplication::translate("lab89Class", "Done", nullptr));
        rbHTML->setText(QCoreApplication::translate("lab89Class", "HTML Format", nullptr));
        label->setText(QCoreApplication::translate("lab89Class", "Select the format you want to save the list in:", nullptr));
        rbCSV->setText(QCoreApplication::translate("lab89Class", "CSV Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab89Class: public Ui_lab89Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB89_H
