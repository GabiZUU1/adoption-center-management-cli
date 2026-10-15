/********************************************************************************
** Form generated from reading UI file 'DeleteWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

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

class Ui_DeleteWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tbl;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnDone;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *DeleteWindowClass)
    {
        if (DeleteWindowClass->objectName().isEmpty())
            DeleteWindowClass->setObjectName("DeleteWindowClass");
        DeleteWindowClass->resize(629, 632);
        QFont font;
        font.setPointSize(12);
        DeleteWindowClass->setFont(font);
        centralWidget = new QWidget(DeleteWindowClass);
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
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnDone = new QPushButton(centralWidget);
        btnDone->setObjectName("btnDone");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDone->sizePolicy().hasHeightForWidth());
        btnDone->setSizePolicy(sizePolicy);
        btnDone->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(16);
        btnDone->setFont(font1);

        horizontalLayout->addWidget(btnDone);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        DeleteWindowClass->setCentralWidget(centralWidget);

        retranslateUi(DeleteWindowClass);
        QObject::connect(btnDone, SIGNAL(clicked()), DeleteWindowClass, SLOT(btnDone_clicked()));
        QObject::connect(tbl, SIGNAL(doubleClicked(QModelIndex)), DeleteWindowClass, SLOT(tbl_doubleClicked(QModelIndex)));

        QMetaObject::connectSlotsByName(DeleteWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteWindowClass)
    {
        DeleteWindowClass->setWindowTitle(QCoreApplication::translate("DeleteWindowClass", "DeleteWindow", nullptr));
        label->setText(QCoreApplication::translate("DeleteWindowClass", "Double click on the dog you want to delete, the Done when you're done!", nullptr));
        btnDone->setText(QCoreApplication::translate("DeleteWindowClass", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindowClass: public Ui_DeleteWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
