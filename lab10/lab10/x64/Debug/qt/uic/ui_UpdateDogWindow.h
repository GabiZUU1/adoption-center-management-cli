/********************************************************************************
** Form generated from reading UI file 'UpdateDogWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDOGWINDOW_H
#define UI_UPDATEDOGWINDOW_H

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

class Ui_UpdateDogWindowClass
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *leName;
    QLabel *label_6;
    QLineEdit *leBreed;
    QLabel *label_7;
    QLineEdit *leAge;
    QLabel *label_8;
    QLineEdit *lePhotograph;
    QLabel *lblError_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdd;

    void setupUi(QMainWindow *UpdateDogWindowClass)
    {
        if (UpdateDogWindowClass->objectName().isEmpty())
            UpdateDogWindowClass->setObjectName("UpdateDogWindowClass");
        UpdateDogWindowClass->resize(679, 291);
        QFont font;
        font.setPointSize(16);
        UpdateDogWindowClass->setFont(font);
        centralWidget = new QWidget(UpdateDogWindowClass);
        centralWidget->setObjectName("centralWidget");
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 661, 186));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        leName = new QLineEdit(formLayoutWidget);
        leName->setObjectName("leName");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, leName);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_6);

        leBreed = new QLineEdit(formLayoutWidget);
        leBreed->setObjectName("leBreed");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, leBreed);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_7);

        leAge = new QLineEdit(formLayoutWidget);
        leAge->setObjectName("leAge");
        leAge->setInputMethodHints(Qt::InputMethodHint::ImhNone);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, leAge);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setTextFormat(Qt::TextFormat::AutoText);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_8);

        lePhotograph = new QLineEdit(formLayoutWidget);
        lePhotograph->setObjectName("lePhotograph");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, lePhotograph);

        lblError_2 = new QLabel(formLayoutWidget);
        lblError_2->setObjectName("lblError_2");
        lblError_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lblError_2->setAutoFillBackground(false);
        lblError_2->setStyleSheet(QString::fromUtf8(""));
        lblError_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::SpanningRole, lblError_2);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 210, 591, 71));
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

        UpdateDogWindowClass->setCentralWidget(centralWidget);
#if QT_CONFIG(shortcut)
        label_5->setBuddy(leName);
        label_6->setBuddy(leBreed);
        label_7->setBuddy(leAge);
        label_8->setBuddy(lePhotograph);
#endif // QT_CONFIG(shortcut)

        retranslateUi(UpdateDogWindowClass);
        QObject::connect(btnCancel, SIGNAL(clicked()), UpdateDogWindowClass, SLOT(btnCancel_clicked()));
        QObject::connect(btnAdd, SIGNAL(clicked()), UpdateDogWindowClass, SLOT(btnAdd_clicked()));
        QObject::connect(lePhotograph, SIGNAL(textChanged(QString)), UpdateDogWindowClass, SLOT(lePhotograph_textChanged()));
        QObject::connect(leAge, SIGNAL(textChanged(QString)), UpdateDogWindowClass, SLOT(leAge_textChanged()));
        QObject::connect(leBreed, SIGNAL(textChanged(QString)), UpdateDogWindowClass, SLOT(leBreed_textChanged()));
        QObject::connect(leName, SIGNAL(textChanged(QString)), UpdateDogWindowClass, SLOT(leName_textChanged()));

        QMetaObject::connectSlotsByName(UpdateDogWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateDogWindowClass)
    {
        UpdateDogWindowClass->setWindowTitle(QCoreApplication::translate("UpdateDogWindowClass", "UpdateDogWindow", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateDogWindowClass", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("UpdateDogWindowClass", "Breed:", nullptr));
        label_7->setText(QCoreApplication::translate("UpdateDogWindowClass", "Age:", nullptr));
        label_8->setText(QCoreApplication::translate("UpdateDogWindowClass", "Link to photograph:", nullptr));
        lblError_2->setText(QString());
        btnCancel->setText(QCoreApplication::translate("UpdateDogWindowClass", "Cancel", nullptr));
        btnAdd->setText(QCoreApplication::translate("UpdateDogWindowClass", "Update dog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDogWindowClass: public Ui_UpdateDogWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDOGWINDOW_H
