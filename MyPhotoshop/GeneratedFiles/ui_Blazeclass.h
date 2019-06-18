/********************************************************************************
** Form generated from reading UI file 'Blazeclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLAZECLASS_H
#define UI_BLAZECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Blazeclass
{
public:
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QWidget *Blazeclass)
    {
        if (Blazeclass->objectName().isEmpty())
            Blazeclass->setObjectName(QString::fromUtf8("Blazeclass"));
        Blazeclass->resize(986, 716);
        gridLayout_2 = new QGridLayout(Blazeclass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(Blazeclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 962, 692));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Blazeclass);

        QMetaObject::connectSlotsByName(Blazeclass);
    } // setupUi

    void retranslateUi(QWidget *Blazeclass)
    {
        Blazeclass->setWindowTitle(QApplication::translate("Blazeclass", "Blazeclass", nullptr));
        label_5->setText(QApplication::translate("Blazeclass", "\347\272\242\351\200\232\351\201\223", nullptr));
        label_7->setText(QApplication::translate("Blazeclass", "\350\223\235\351\200\232\351\201\223", nullptr));
        label_2->setText(QApplication::translate("Blazeclass", "TextLabel", nullptr));
        label->setText(QApplication::translate("Blazeclass", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Blazeclass", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("Blazeclass", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("Blazeclass", "\347\273\277\351\200\232\351\201\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Blazeclass: public Ui_Blazeclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLAZECLASS_H
