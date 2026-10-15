/********************************************************************************
** Form generated from reading UI file 'UpdateWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEWINDOW_H
#define UI_UPDATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tbl;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnDone;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *UpdateWindowClass)
    {
        if (UpdateWindowClass->objectName().isEmpty())
            UpdateWindowClass->setObjectName("UpdateWindowClass");
        UpdateWindowClass->resize(596, 658);
        QFont font;
        font.setPointSize(12);
        UpdateWindowClass->setFont(font);
        centralWidget = new QWidget(UpdateWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        tbl = new QTableView(centralWidget);
        tbl->setObjectName("tbl");
        tbl->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tbl->setAlternatingRowColors(true);
        tbl->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tbl->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout->addWidget(tbl);

        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnDone = new QPushButton(centralWidget);
        btnDone->setObjectName("btnDone");
        btnDone->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnDone);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        UpdateWindowClass->setCentralWidget(centralWidget);

        retranslateUi(UpdateWindowClass);
        QObject::connect(tbl, SIGNAL(doubleClicked(QModelIndex)), UpdateWindowClass, SLOT(tbl_doubleClicked(QModelIndex)));
        QObject::connect(btnDone, SIGNAL(clicked()), UpdateWindowClass, SLOT(btnDone_clicked()));

        QMetaObject::connectSlotsByName(UpdateWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateWindowClass)
    {
        UpdateWindowClass->setWindowTitle(QCoreApplication::translate("UpdateWindowClass", "UpdateWindow", nullptr));
        label->setText(QCoreApplication::translate("UpdateWindowClass", "Double click on the dog you want to update, then Done when you're done!", nullptr));
        btnDone->setText(QCoreApplication::translate("UpdateWindowClass", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateWindowClass: public Ui_UpdateWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWINDOW_H
