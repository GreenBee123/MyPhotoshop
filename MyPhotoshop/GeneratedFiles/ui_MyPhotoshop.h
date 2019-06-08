/********************************************************************************
** Form generated from reading UI file 'MyPhotoshop.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPHOTOSHOP_H
#define UI_MYPHOTOSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyPhotoshopClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyPhotoshopClass)
    {
        if (MyPhotoshopClass->objectName().isEmpty())
            MyPhotoshopClass->setObjectName(QString::fromUtf8("MyPhotoshopClass"));
        MyPhotoshopClass->resize(1100, 758);
        centralWidget = new QWidget(MyPhotoshopClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1076, 683));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        MyPhotoshopClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyPhotoshopClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1100, 26));
        MyPhotoshopClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MyPhotoshopClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyPhotoshopClass->setStatusBar(statusBar);

        retranslateUi(MyPhotoshopClass);

        QMetaObject::connectSlotsByName(MyPhotoshopClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyPhotoshopClass)
    {
        MyPhotoshopClass->setWindowTitle(QApplication::translate("MyPhotoshopClass", "MyPhotoshop", nullptr));
        label->setText(QApplication::translate("MyPhotoshopClass", "\346\211\223\345\274\200\347\232\204\345\233\276\345\203\217\345\260\206\345\234\250\346\255\244\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyPhotoshopClass: public Ui_MyPhotoshopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPHOTOSHOP_H
