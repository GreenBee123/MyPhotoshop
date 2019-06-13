/********************************************************************************
** Form generated from reading UI file 'rain_Special_Effectsclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAIN_SPECIAL_EFFECTSCLASS_H
#define UI_RAIN_SPECIAL_EFFECTSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rain_Special_Effectsclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *rain_Special_Effectsclass)
    {
        if (rain_Special_Effectsclass->objectName().isEmpty())
            rain_Special_Effectsclass->setObjectName(QString::fromUtf8("rain_Special_Effectsclass"));
        rain_Special_Effectsclass->resize(627, 498);
        gridLayout = new QGridLayout(rain_Special_Effectsclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(rain_Special_Effectsclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 603, 474));
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


        retranslateUi(rain_Special_Effectsclass);

        QMetaObject::connectSlotsByName(rain_Special_Effectsclass);
    } // setupUi

    void retranslateUi(QWidget *rain_Special_Effectsclass)
    {
        rain_Special_Effectsclass->setWindowTitle(QApplication::translate("rain_Special_Effectsclass", "rain_Special_Effectsclass", nullptr));
        label->setText(QApplication::translate("rain_Special_Effectsclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rain_Special_Effectsclass: public Ui_rain_Special_Effectsclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAIN_SPECIAL_EFFECTSCLASS_H
