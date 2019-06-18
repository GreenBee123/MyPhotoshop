/********************************************************************************
** Form generated from reading UI file 'Waveclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVECLASS_H
#define UI_WAVECLASS_H

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

class Ui_Waveclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_3;
    QSlider *SnowSpecialEffectsSlider;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *Waveclass)
    {
        if (Waveclass->objectName().isEmpty())
            Waveclass->setObjectName(QString::fromUtf8("Waveclass"));
        Waveclass->resize(1045, 745);
        gridLayout = new QGridLayout(Waveclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Waveclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1021, 721));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

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
        SnowSpecialEffectsSlider->setMaximum(99);
        SnowSpecialEffectsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(SnowSpecialEffectsSlider);


        gridLayout_2->addLayout(horizontalLayout, 0, 3, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(65, 30));
        label_6->setMaximumSize(QSize(65, 60));

        horizontalLayout_3->addWidget(label_6);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(25, 30));
        label_5->setMaximumSize(QSize(25, 60));

        horizontalLayout_3->addWidget(label_5);

        horizontalSlider = new QSlider(scrollAreaWidgetContents);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(200, 30));
        horizontalSlider->setMaximumSize(QSize(350, 60));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 3, 1, 1);

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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 5, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Waveclass);
        QObject::connect(SnowSpecialEffectsSlider, SIGNAL(valueChanged(int)), Waveclass, SLOT(on_Slider_valueChanged(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Waveclass, SLOT(on_Slider_2_valueChanged(int)));

        QMetaObject::connectSlotsByName(Waveclass);
    } // setupUi

    void retranslateUi(QWidget *Waveclass)
    {
        Waveclass->setWindowTitle(QApplication::translate("Waveclass", "Waveclass", nullptr));
        label_4->setText(QApplication::translate("Waveclass", "\345\221\250\346\234\237\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Waveclass", "0", nullptr));
        label_2->setText(QApplication::translate("Waveclass", "\351\242\204\350\247\210\346\225\210\346\236\234", nullptr));
        label_6->setText(QApplication::translate("Waveclass", "\346\214\257\345\271\205\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Waveclass", "25", nullptr));
        pushButton->setText(QApplication::translate("Waveclass", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("Waveclass", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Waveclass", "img", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Waveclass: public Ui_Waveclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVECLASS_H
