/********************************************************************************
** Form generated from reading UI file 'Hue_Saturationclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUE_SATURATIONCLASS_H
#define UI_HUE_SATURATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hue_Saturationclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_3;
    QSlider *Slider;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Hue_Saturationclass)
    {
        if (Hue_Saturationclass->objectName().isEmpty())
            Hue_Saturationclass->setObjectName(QString::fromUtf8("Hue_Saturationclass"));
        Hue_Saturationclass->resize(1113, 855);
        gridLayout = new QGridLayout(Hue_Saturationclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Hue_Saturationclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1089, 831));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(65, 30));
        label_4->setMaximumSize(QSize(65, 60));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(25, 30));
        label_3->setMaximumSize(QSize(25, 60));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        Slider = new QSlider(scrollAreaWidgetContents);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setMinimumSize(QSize(200, 30));
        Slider->setMaximumSize(QSize(350, 60));
        Slider->setMinimum(-50);
        Slider->setMaximum(100);
        Slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(Slider);


        gridLayout_2->addLayout(horizontalLayout, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(75, 28));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(75, 28));

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 3, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Hue_Saturationclass);
        QObject::connect(Slider, SIGNAL(valueChanged(int)), Hue_Saturationclass, SLOT(on_Slider_valueChanged(int)));

        QMetaObject::connectSlotsByName(Hue_Saturationclass);
    } // setupUi

    void retranslateUi(QWidget *Hue_Saturationclass)
    {
        Hue_Saturationclass->setWindowTitle(QApplication::translate("Hue_Saturationclass", "Hue_Saturationclass", nullptr));
        label_2->setText(QApplication::translate("Hue_Saturationclass", "\351\242\204\350\247\210\346\225\210\346\236\234", nullptr));
        label->setText(QApplication::translate("Hue_Saturationclass", "img", nullptr));
        label_4->setText(QApplication::translate("Hue_Saturationclass", "\351\245\261\345\222\214\345\272\246", nullptr));
        label_3->setText(QApplication::translate("Hue_Saturationclass", "0", nullptr));
        pushButton->setText(QApplication::translate("Hue_Saturationclass", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("Hue_Saturationclass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hue_Saturationclass: public Ui_Hue_Saturationclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUE_SATURATIONCLASS_H
