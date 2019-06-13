/********************************************************************************
** Form generated from reading UI file 'comic_Strips_class.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMIC_STRIPS_CLASS_H
#define UI_COMIC_STRIPS_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comic_Strips_class
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *comic_Strips_class)
    {
        if (comic_Strips_class->objectName().isEmpty())
            comic_Strips_class->setObjectName(QString::fromUtf8("comic_Strips_class"));
        comic_Strips_class->resize(780, 479);
        gridLayout = new QGridLayout(comic_Strips_class);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(comic_Strips_class);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 756, 455));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(comic_Strips_class);

        QMetaObject::connectSlotsByName(comic_Strips_class);
    } // setupUi

    void retranslateUi(QWidget *comic_Strips_class)
    {
        comic_Strips_class->setWindowTitle(QApplication::translate("comic_Strips_class", "comic_Strips_class", nullptr));
        label->setText(QApplication::translate("comic_Strips_class", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class comic_Strips_class: public Ui_comic_Strips_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMIC_STRIPS_CLASS_H
