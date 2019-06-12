/********************************************************************************
** Form generated from reading UI file 'Image_Transformationclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_TRANSFORMATIONCLASS_H
#define UI_IMAGE_TRANSFORMATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Image_Transformationclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *Image_Transformationclass)
    {
        if (Image_Transformationclass->objectName().isEmpty())
            Image_Transformationclass->setObjectName(QString::fromUtf8("Image_Transformationclass"));
        Image_Transformationclass->resize(1123, 835);
        gridLayout = new QGridLayout(Image_Transformationclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Image_Transformationclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1099, 811));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 60));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(9, 19, 281, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(horizontalLayoutWidget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(radioButton_3);


        gridLayout_2->addWidget(groupBox_2, 4, 3, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 60));
        groupBox_3->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayoutWidget_3 = new QWidget(groupBox_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 281, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(30, 0));

        horizontalLayout_4->addWidget(label_4);

        horizontalSlider_2 = new QSlider(horizontalLayoutWidget_3);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(360);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_2);


        gridLayout_2->addWidget(groupBox_3, 5, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);


        gridLayout_2->addLayout(horizontalLayout_5, 6, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

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


        gridLayout_2->addLayout(horizontalLayout_2, 7, 3, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 60));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 281, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(label_3);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(20);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        gridLayout_2->addWidget(groupBox, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 8, 3, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 1, 6, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Image_Transformationclass);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Image_Transformationclass, SLOT(on_horizontalSlider_valueChanged(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), Image_Transformationclass, SLOT(on_horizontalSlider_2_valueChanged(int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Image_Transformationclass, SLOT(on_BtnpushButton_3_clicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Image_Transformationclass, SLOT(on_BtnpushButton_4_clicked()));
        QObject::connect(radioButton, SIGNAL(clicked()), Image_Transformationclass, SLOT(on_radioBtn_clicked()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), Image_Transformationclass, SLOT(on_radioBtn_2_clicked()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), Image_Transformationclass, SLOT(on_radioBtn_3_clicked()));

        QMetaObject::connectSlotsByName(Image_Transformationclass);
    } // setupUi

    void retranslateUi(QWidget *Image_Transformationclass)
    {
        Image_Transformationclass->setWindowTitle(QApplication::translate("Image_Transformationclass", "Image_Transformationclass", nullptr));
        label_2->setText(QApplication::translate("Image_Transformationclass", "\351\242\204\350\247\210\346\225\210\346\236\234", nullptr));
        groupBox_2->setTitle(QApplication::translate("Image_Transformationclass", "\347\277\273\350\275\254", nullptr));
        radioButton->setText(QApplication::translate("Image_Transformationclass", "\345\267\246\345\217\263", nullptr));
        radioButton_2->setText(QApplication::translate("Image_Transformationclass", "\344\270\212\344\270\213", nullptr));
        radioButton_3->setText(QApplication::translate("Image_Transformationclass", "\344\270\212\344\270\213+\345\267\246\345\217\263", nullptr));
        groupBox_3->setTitle(QApplication::translate("Image_Transformationclass", "\346\227\213\350\275\254", nullptr));
        label_4->setText(QApplication::translate("Image_Transformationclass", "00", nullptr));
        pushButton_3->setText(QApplication::translate("Image_Transformationclass", "\347\277\230\346\233\262", nullptr));
        pushButton_4->setText(QApplication::translate("Image_Transformationclass", "\346\201\242\345\244\215\345\216\237\345\233\276", nullptr));
        pushButton->setText(QApplication::translate("Image_Transformationclass", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("Image_Transformationclass", "\345\217\226\346\266\210", nullptr));
        groupBox->setTitle(QApplication::translate("Image_Transformationclass", "\347\274\251\346\224\276", nullptr));
        label_3->setText(QApplication::translate("Image_Transformationclass", "0.0", nullptr));
        label->setText(QApplication::translate("Image_Transformationclass", "img", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Image_Transformationclass: public Ui_Image_Transformationclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_TRANSFORMATIONCLASS_H
