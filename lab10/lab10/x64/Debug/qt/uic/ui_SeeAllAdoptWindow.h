/********************************************************************************
** Form generated from reading UI file 'SeeAllAdoptWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEALLADOPTWINDOW_H
#define UI_SEEALLADOPTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeeAllAdoptWindowClass
{
public:
    QWidget *centralWidget;
    QLabel *lblAge;
    QLabel *label_6;
    QLabel *lblBreed;
    QFrame *line_2;
    QLabel *label_5;
    QLabel *lblName;
    QLabel *label_8;
    QLabel *lblPhoto;
    QLabel *label_7;
    QPushButton *btnBack;
    QPushButton *btnView;
    QPushButton *btnAdopt;
    QPushButton *btnNext;

    void setupUi(QMainWindow *SeeAllAdoptWindowClass)
    {
        if (SeeAllAdoptWindowClass->objectName().isEmpty())
            SeeAllAdoptWindowClass->setObjectName("SeeAllAdoptWindowClass");
        SeeAllAdoptWindowClass->resize(750, 198);
        QFont font;
        font.setPointSize(16);
        SeeAllAdoptWindowClass->setFont(font);
        centralWidget = new QWidget(SeeAllAdoptWindowClass);
        centralWidget->setObjectName("centralWidget");
        lblAge = new QLabel(centralWidget);
        lblAge->setObjectName("lblAge");
        lblAge->setGeometry(QRect(70, 50, 91, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(240, 50, 121, 31));
        lblBreed = new QLabel(centralWidget);
        lblBreed->setObjectName("lblBreed");
        lblBreed->setGeometry(QRect(470, 10, 271, 31));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 90, 751, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush1);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush1);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush4(QColor(0, 0, 0, 127));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush1);
#endif
        line_2->setPalette(palette);
        line_2->setAutoFillBackground(false);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::HLine);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 61, 31));
        lblName = new QLabel(centralWidget);
        lblName->setObjectName("lblName");
        lblName->setGeometry(QRect(80, 10, 301, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(400, 10, 61, 31));
        lblPhoto = new QLabel(centralWidget);
        lblPhoto->setObjectName("lblPhoto");
        lblPhoto->setGeometry(QRect(370, 50, 371, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 50, 49, 31));
        btnBack = new QPushButton(centralWidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(70, 120, 141, 61));
        btnView = new QPushButton(centralWidget);
        btnView->setObjectName("btnView");
        btnView->setGeometry(QRect(220, 120, 141, 61));
        btnAdopt = new QPushButton(centralWidget);
        btnAdopt->setObjectName("btnAdopt");
        btnAdopt->setGeometry(QRect(370, 120, 141, 61));
        btnNext = new QPushButton(centralWidget);
        btnNext->setObjectName("btnNext");
        btnNext->setGeometry(QRect(520, 120, 141, 61));
        SeeAllAdoptWindowClass->setCentralWidget(centralWidget);

        retranslateUi(SeeAllAdoptWindowClass);
        QObject::connect(btnBack, SIGNAL(clicked()), SeeAllAdoptWindowClass, SLOT(btnBack_clicked()));
        QObject::connect(btnView, SIGNAL(clicked()), SeeAllAdoptWindowClass, SLOT(btnView_clicked()));
        QObject::connect(btnAdopt, SIGNAL(clicked()), SeeAllAdoptWindowClass, SLOT(btnAdopt_clicked()));
        QObject::connect(btnNext, SIGNAL(clicked()), SeeAllAdoptWindowClass, SLOT(btnNext_clicked()));

        QMetaObject::connectSlotsByName(SeeAllAdoptWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *SeeAllAdoptWindowClass)
    {
        SeeAllAdoptWindowClass->setWindowTitle(QCoreApplication::translate("SeeAllAdoptWindowClass", "SeeAllAdoptWindow", nullptr));
        lblAge->setText(QString());
        label_6->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "Photograph:", nullptr));
        lblBreed->setText(QString());
        label_5->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "Name:", nullptr));
        lblName->setText(QString());
        label_8->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "Breed:", nullptr));
        lblPhoto->setText(QString());
        label_7->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "Age:", nullptr));
        btnBack->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "Go back", nullptr));
        btnView->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "View photo", nullptr));
        btnAdopt->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "ADOPT", nullptr));
        btnNext->setText(QCoreApplication::translate("SeeAllAdoptWindowClass", "Next dog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeeAllAdoptWindowClass: public Ui_SeeAllAdoptWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEALLADOPTWINDOW_H
