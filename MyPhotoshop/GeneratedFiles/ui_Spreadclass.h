/********************************************************************************
** Form generated from reading UI file 'Spreadclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADCLASS_H
#define UI_SPREADCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spreadclass
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;

    void setupUi(QWidget *Spreadclass)
    {
        if (Spreadclass->objectName().isEmpty())
            Spreadclass->setObjectName(QString::fromUtf8("Spreadclass"));
        Spreadclass->resize(1009, 693);
        scrollArea = new QScrollArea(Spreadclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(9, 16, 991, 661));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 989, 659));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 310, 72, 15));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Spreadclass);

        QMetaObject::connectSlotsByName(Spreadclass);
    } // setupUi

    void retranslateUi(QWidget *Spreadclass)
    {
        Spreadclass->setWindowTitle(QApplication::translate("Spreadclass", "Spreadclass", nullptr));
        label->setText(QApplication::translate("Spreadclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Spreadclass: public Ui_Spreadclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADCLASS_H
