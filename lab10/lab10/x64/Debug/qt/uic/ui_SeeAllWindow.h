/********************************************************************************
** Form generated from reading UI file 'SeeAllWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEALLWINDOW_H
#define UI_SEEALLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeeAllWindowClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblName;
    QLabel *lblBreed;
    QLabel *label_3;
    QLabel *lblAge;
    QLabel *label_4;
    QLabel *lblPhoto;
    QFrame *line;
    QPushButton *btnBack;
    QPushButton *btnNext;
    QPushButton *btnPhoto;

    void setupUi(QMainWindow *SeeAllWindowClass)
    {
        if (SeeAllWindowClass->objectName().isEmpty())
            SeeAllWindowClass->setObjectName("SeeAllWindowClass");
        SeeAllWindowClass->resize(750, 198);
        QFont font;
        font.setPointSize(16);
        SeeAllWindowClass->setFont(font);
        centralWidget = new QWidget(SeeAllWindowClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 61, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(400, 10, 61, 31));
        lblName = new QLabel(centralWidget);
        lblName->setObjectName("lblName");
        lblName->setGeometry(QRect(80, 10, 301, 31));
        lblBreed = new QLabel(centralWidget);
        lblBreed->setObjectName("lblBreed");
        lblBreed->setGeometry(QRect(470, 10, 271, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 50, 49, 31));
        lblAge = new QLabel(centralWidget);
        lblAge->setObjectName("lblAge");
        lblAge->setGeometry(QRect(70, 50, 91, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 50, 121, 31));
        lblPhoto = new QLabel(centralWidget);
        lblPhoto->setObjectName("lblPhoto");
        lblPhoto->setGeometry(QRect(370, 50, 371, 31));
        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 90, 751, 31));
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
        line->setPalette(palette);
        line->setAutoFillBackground(false);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        btnBack = new QPushButton(centralWidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(140, 120, 141, 61));
        btnNext = new QPushButton(centralWidget);
        btnNext->setObjectName("btnNext");
        btnNext->setGeometry(QRect(460, 120, 141, 61));
        btnPhoto = new QPushButton(centralWidget);
        btnPhoto->setObjectName("btnPhoto");
        btnPhoto->setGeometry(QRect(300, 120, 141, 61));
        QFont font1;
        font1.setPointSize(10);
        btnPhoto->setFont(font1);
        SeeAllWindowClass->setCentralWidget(centralWidget);

        retranslateUi(SeeAllWindowClass);
        QObject::connect(btnBack, SIGNAL(clicked()), SeeAllWindowClass, SLOT(btnBack_clicked()));
        QObject::connect(btnNext, SIGNAL(clicked()), SeeAllWindowClass, SLOT(btnNext_clicked()));
        QObject::connect(btnPhoto, SIGNAL(clicked()), SeeAllWindowClass, SLOT(btnPhoto_clicked()));

        QMetaObject::connectSlotsByName(SeeAllWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *SeeAllWindowClass)
    {
        SeeAllWindowClass->setWindowTitle(QCoreApplication::translate("SeeAllWindowClass", "SeeAllWindow", nullptr));
        label->setText(QCoreApplication::translate("SeeAllWindowClass", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("SeeAllWindowClass", "Breed:", nullptr));
        lblName->setText(QString());
        lblBreed->setText(QString());
        label_3->setText(QCoreApplication::translate("SeeAllWindowClass", "Age:", nullptr));
        lblAge->setText(QString());
        label_4->setText(QCoreApplication::translate("SeeAllWindowClass", "Photograph:", nullptr));
        lblPhoto->setText(QString());
        btnBack->setText(QCoreApplication::translate("SeeAllWindowClass", "Go back", nullptr));
        btnNext->setText(QCoreApplication::translate("SeeAllWindowClass", "Next dog", nullptr));
        btnPhoto->setText(QCoreApplication::translate("SeeAllWindowClass", "Open photo in browser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeeAllWindowClass: public Ui_SeeAllWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEALLWINDOW_H
