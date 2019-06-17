/********************************************************************************
** Form generated from reading UI file 'Vortexclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VORTEXCLASS_H
#define UI_VORTEXCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vortexclass
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;

    void setupUi(QWidget *Vortexclass)
    {
        if (Vortexclass->objectName().isEmpty())
            Vortexclass->setObjectName(QString::fromUtf8("Vortexclass"));
        Vortexclass->resize(960, 750);
        scrollArea = new QScrollArea(Vortexclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(9, 16, 941, 711));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 939, 709));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 911, 681));
        label->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Vortexclass);

        QMetaObject::connectSlotsByName(Vortexclass);
    } // setupUi

    void retranslateUi(QWidget *Vortexclass)
    {
        Vortexclass->setWindowTitle(QApplication::translate("Vortexclass", "Vortexclass", nullptr));
        label->setText(QApplication::translate("Vortexclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vortexclass: public Ui_Vortexclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VORTEXCLASS_H
