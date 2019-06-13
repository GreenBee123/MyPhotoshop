/********************************************************************************
** Form generated from reading UI file 'castingclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASTINGCLASS_H
#define UI_CASTINGCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_castingclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *castingclass)
    {
        if (castingclass->objectName().isEmpty())
            castingclass->setObjectName(QString::fromUtf8("castingclass"));
        castingclass->resize(844, 690);
        gridLayout = new QGridLayout(castingclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(castingclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 820, 666));
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


        retranslateUi(castingclass);

        QMetaObject::connectSlotsByName(castingclass);
    } // setupUi

    void retranslateUi(QWidget *castingclass)
    {
        castingclass->setWindowTitle(QApplication::translate("castingclass", "castingclass", nullptr));
        label->setText(QApplication::translate("castingclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class castingclass: public Ui_castingclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTINGCLASS_H
