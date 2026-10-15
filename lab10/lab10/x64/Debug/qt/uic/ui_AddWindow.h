/********************************************************************************
** Form generated from reading UI file 'AddWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWindowClass
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QLineEdit *leBreed;
    QLabel *label_3;
    QLineEdit *leAge;
    QLabel *label_4;
    QLineEdit *lePhotograph;
    QLabel *lblError;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdd;

    void setupUi(QMainWindow *AddWindowClass)
    {
        if (AddWindowClass->objectName().isEmpty())
            AddWindowClass->setObjectName("AddWindowClass");
        AddWindowClass->resize(679, 291);
        QFont font;
        font.setPointSize(16);
        AddWindowClass->setFont(font);
        centralWidget = new QWidget(AddWindowClass);
        centralWidget->setObjectName("centralWidget");
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 661, 186));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        leName = new QLineEdit(formLayoutWidget);
        leName->setObjectName("leName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, leName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        leBreed = new QLineEdit(formLayoutWidget);
        leBreed->setObjectName("leBreed");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, leBreed);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        leAge = new QLineEdit(formLayoutWidget);
        leAge->setObjectName("leAge");
        leAge->setInputMethodHints(Qt::InputMethodHint::ImhNone);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, leAge);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setTextFormat(Qt::TextFormat::AutoText);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        lePhotograph = new QLineEdit(formLayoutWidget);
        lePhotograph->setObjectName("lePhotograph");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lePhotograph);

        lblError = new QLabel(formLayoutWidget);
        lblError->setObjectName("lblError");
        lblError->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lblError->setAutoFillBackground(false);
        lblError->setStyleSheet(QString::fromUtf8(""));
        lblError->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::SpanningRole, lblError);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 210, 591, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName("btnCancel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAdd = new QPushButton(horizontalLayoutWidget);
        btnAdd->setObjectName("btnAdd");
        sizePolicy1.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnAdd);

        AddWindowClass->setCentralWidget(centralWidget);
#if QT_CONFIG(shortcut)
        label->setBuddy(leName);
        label_2->setBuddy(leBreed);
        label_3->setBuddy(leAge);
        label_4->setBuddy(lePhotograph);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AddWindowClass);
        QObject::connect(btnCancel, SIGNAL(clicked()), AddWindowClass, SLOT(btnCancel_clicked()));
        QObject::connect(btnAdd, SIGNAL(clicked()), AddWindowClass, SLOT(btnAdd_clicked()));
        QObject::connect(leName, SIGNAL(textChanged(QString)), AddWindowClass, SLOT(leName_textChangedI()));
        QObject::connect(leBreed, SIGNAL(textChanged(QString)), AddWindowClass, SLOT(leBreed_textChanged()));
        QObject::connect(leAge, SIGNAL(textChanged(QString)), AddWindowClass, SLOT(leAge_textChanged()));
        QObject::connect(lePhotograph, SIGNAL(textChanged(QString)), AddWindowClass, SLOT(lePhotograph_textChanged()));

        QMetaObject::connectSlotsByName(AddWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddWindowClass)
    {
        AddWindowClass->setWindowTitle(QCoreApplication::translate("AddWindowClass", "AddWindow", nullptr));
        label->setText(QCoreApplication::translate("AddWindowClass", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindowClass", "Breed:", nullptr));
        label_3->setText(QCoreApplication::translate("AddWindowClass", "Age:", nullptr));
        label_4->setText(QCoreApplication::translate("AddWindowClass", "Link to photograph:", nullptr));
        lblError->setText(QString());
        btnCancel->setText(QCoreApplication::translate("AddWindowClass", "Cancel", nullptr));
        btnAdd->setText(QCoreApplication::translate("AddWindowClass", "Add dog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindowClass: public Ui_AddWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
