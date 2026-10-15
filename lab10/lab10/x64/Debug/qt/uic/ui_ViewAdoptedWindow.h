/********************************************************************************
** Form generated from reading UI file 'ViewAdoptedWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWADOPTEDWINDOW_H
#define UI_VIEWADOPTEDWINDOW_H

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

class Ui_ViewAdoptedWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tbl;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBack;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *ViewAdoptedWindowClass)
    {
        if (ViewAdoptedWindowClass->objectName().isEmpty())
            ViewAdoptedWindowClass->setObjectName("ViewAdoptedWindowClass");
        ViewAdoptedWindowClass->resize(644, 603);
        QFont font;
        font.setPointSize(12);
        ViewAdoptedWindowClass->setFont(font);
        centralWidget = new QWidget(ViewAdoptedWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        tbl = new QTableView(centralWidget);
        tbl->setObjectName("tbl");
        tbl->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tbl->setAlternatingRowColors(true);
        tbl->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tbl->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout->addWidget(tbl);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnBack = new QPushButton(centralWidget);
        btnBack->setObjectName("btnBack");
        btnBack->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(16);
        btnBack->setFont(font2);

        horizontalLayout->addWidget(btnBack);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        ViewAdoptedWindowClass->setCentralWidget(centralWidget);

        retranslateUi(ViewAdoptedWindowClass);
        QObject::connect(tbl, SIGNAL(doubleClicked(QModelIndex)), ViewAdoptedWindowClass, SLOT(tbl_doubleClicked(QModelIndex)));
        QObject::connect(btnBack, SIGNAL(clicked()), ViewAdoptedWindowClass, SLOT(btnBack_clicked()));

        QMetaObject::connectSlotsByName(ViewAdoptedWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ViewAdoptedWindowClass)
    {
        ViewAdoptedWindowClass->setWindowTitle(QCoreApplication::translate("ViewAdoptedWindowClass", "ViewAdoptedWindow", nullptr));
        label->setText(QCoreApplication::translate("ViewAdoptedWindowClass", "Here are the dogs that you've adopted!", nullptr));
        btnBack->setText(QCoreApplication::translate("ViewAdoptedWindowClass", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAdoptedWindowClass: public Ui_ViewAdoptedWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWADOPTEDWINDOW_H
