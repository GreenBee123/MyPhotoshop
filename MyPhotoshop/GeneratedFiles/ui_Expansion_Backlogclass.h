/********************************************************************************
** Form generated from reading UI file 'Expansion_Backlogclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPANSION_BACKLOGCLASS_H
#define UI_EXPANSION_BACKLOGCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Expansion_Backlogclass
{
public:
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Expansion_Backlogclass)
    {
        if (Expansion_Backlogclass->objectName().isEmpty())
            Expansion_Backlogclass->setObjectName(QString::fromUtf8("Expansion_Backlogclass"));
        Expansion_Backlogclass->resize(985, 679);
        gridLayout_2 = new QGridLayout(Expansion_Backlogclass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(Expansion_Backlogclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 961, 655));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Expansion_Backlogclass);

        QMetaObject::connectSlotsByName(Expansion_Backlogclass);
    } // setupUi

    void retranslateUi(QWidget *Expansion_Backlogclass)
    {
        Expansion_Backlogclass->setWindowTitle(QApplication::translate("Expansion_Backlogclass", "Expansion_Backlogclass", nullptr));
        label->setText(QApplication::translate("Expansion_Backlogclass", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Expansion_Backlogclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Expansion_Backlogclass: public Ui_Expansion_Backlogclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPANSION_BACKLOGCLASS_H
