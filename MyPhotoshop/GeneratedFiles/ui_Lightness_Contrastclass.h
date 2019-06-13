/********************************************************************************
** Form generated from reading UI file 'Lightness_Contrastclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTNESS_CONTRASTCLASS_H
#define UI_LIGHTNESS_CONTRASTCLASS_H

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

class Ui_Lightness_Contrastclass
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
    QSlider *SnowSpecialEffectsSlider;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *horizontalSlider_2;

    void setupUi(QWidget *Lightness_Contrastclass)
    {
        if (Lightness_Contrastclass->objectName().isEmpty())
            Lightness_Contrastclass->setObjectName(QString::fromUtf8("Lightness_Contrastclass"));
        Lightness_Contrastclass->resize(1156, 785);
        gridLayout = new QGridLayout(Lightness_Contrastclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Lightness_Contrastclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1132, 761));
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

        SnowSpecialEffectsSlider = new QSlider(scrollAreaWidgetContents);
        SnowSpecialEffectsSlider->setObjectName(QString::fromUtf8("SnowSpecialEffectsSlider"));
        SnowSpecialEffectsSlider->setMinimumSize(QSize(200, 30));
        SnowSpecialEffectsSlider->setMaximumSize(QSize(350, 60));
        SnowSpecialEffectsSlider->setMaximum(30);
        SnowSpecialEffectsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(SnowSpecialEffectsSlider);


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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(65, 30));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(25, 30));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        horizontalSlider_2 = new QSlider(scrollAreaWidgetContents);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimumSize(QSize(200, 30));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_2);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 3, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Lightness_Contrastclass);
        QObject::connect(SnowSpecialEffectsSlider, SIGNAL(valueChanged(int)), Lightness_Contrastclass, SLOT(on_horizontalSlider_valueChanged(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), Lightness_Contrastclass, SLOT(on_horizontalSlider_2_valueChanged(int)));

        QMetaObject::connectSlotsByName(Lightness_Contrastclass);
    } // setupUi

    void retranslateUi(QWidget *Lightness_Contrastclass)
    {
        Lightness_Contrastclass->setWindowTitle(QApplication::translate("Lightness_Contrastclass", "Lightness_Contrastclass", nullptr));
        label_2->setText(QApplication::translate("Lightness_Contrastclass", "\351\242\204\350\247\210\346\225\210\346\236\234", nullptr));
        label->setText(QApplication::translate("Lightness_Contrastclass", "img", nullptr));
        label_4->setText(QApplication::translate("Lightness_Contrastclass", "\346\230\216\345\272\246", nullptr));
        label_3->setText(QApplication::translate("Lightness_Contrastclass", "0", nullptr));
        pushButton->setText(QApplication::translate("Lightness_Contrastclass", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("Lightness_Contrastclass", "\345\217\226\346\266\210", nullptr));
        label_5->setText(QApplication::translate("Lightness_Contrastclass", "\345\257\271\346\257\224\345\272\246", nullptr));
        label_6->setText(QApplication::translate("Lightness_Contrastclass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lightness_Contrastclass: public Ui_Lightness_Contrastclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTNESS_CONTRASTCLASS_H
