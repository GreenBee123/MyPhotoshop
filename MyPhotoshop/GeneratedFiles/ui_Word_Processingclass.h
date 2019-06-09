/********************************************************************************
** Form generated from reading UI file 'Word_Processingclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_PROCESSINGCLASS_H
#define UI_WORD_PROCESSINGCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Word_Processingclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *change_pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QComboBox *thickness_comboBox;
    QComboBox *fontFace_comboBox_2;
    QComboBox *fontScale_comboBox_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *frame_checkBox;
    QCheckBox *underline_checkBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSlider *red_horizontalSlider;
    QSlider *green_horizontalSlider;
    QSlider *blue_horizontalSlider;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QTextEdit *textEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLabel *label_15;
    QTextEdit *x_img_location;
    QLabel *label_16;
    QTextEdit *y_img_location;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_img_longth;
    QLabel *label_7;
    QLabel *label_img_width;
    QLabel *label;

    void setupUi(QWidget *Word_Processingclass)
    {
        if (Word_Processingclass->objectName().isEmpty())
            Word_Processingclass->setObjectName(QString::fromUtf8("Word_Processingclass"));
        Word_Processingclass->resize(1197, 832);
        gridLayout = new QGridLayout(Word_Processingclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Word_Processingclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1173, 808));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 8, 3, 1, 1);

        change_pushButton = new QPushButton(scrollAreaWidgetContents);
        change_pushButton->setObjectName(QString::fromUtf8("change_pushButton"));

        gridLayout_2->addWidget(change_pushButton, 9, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(400, 16777215));

        verticalLayout->addWidget(label_3);


        gridLayout_2->addLayout(verticalLayout, 2, 3, 1, 1);

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


        gridLayout_2->addLayout(horizontalLayout_2, 10, 3, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        thickness_comboBox = new QComboBox(scrollAreaWidgetContents);
        thickness_comboBox->addItem(QString());
        thickness_comboBox->addItem(QString());
        thickness_comboBox->addItem(QString());
        thickness_comboBox->addItem(QString());
        thickness_comboBox->addItem(QString());
        thickness_comboBox->setObjectName(QString::fromUtf8("thickness_comboBox"));
        thickness_comboBox->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(thickness_comboBox, 1, 0, 1, 1);

        fontFace_comboBox_2 = new QComboBox(scrollAreaWidgetContents);
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->addItem(QString());
        fontFace_comboBox_2->setObjectName(QString::fromUtf8("fontFace_comboBox_2"));
        fontFace_comboBox_2->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(fontFace_comboBox_2, 1, 1, 1, 1);

        fontScale_comboBox_3 = new QComboBox(scrollAreaWidgetContents);
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->addItem(QString());
        fontScale_comboBox_3->setObjectName(QString::fromUtf8("fontScale_comboBox_3"));
        fontScale_comboBox_3->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(fontScale_comboBox_3, 1, 2, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 20));

        gridLayout_3->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 5, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_checkBox = new QCheckBox(scrollAreaWidgetContents);
        frame_checkBox->setObjectName(QString::fromUtf8("frame_checkBox"));
        frame_checkBox->setMaximumSize(QSize(150, 30));

        horizontalLayout_5->addWidget(frame_checkBox);

        underline_checkBox = new QCheckBox(scrollAreaWidgetContents);
        underline_checkBox->setObjectName(QString::fromUtf8("underline_checkBox"));
        underline_checkBox->setMaximumSize(QSize(130, 30));

        horizontalLayout_5->addWidget(underline_checkBox);


        gridLayout_2->addLayout(horizontalLayout_5, 7, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 11, 3, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(400, 60));

        gridLayout_2->addWidget(textEdit, 3, 3, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 120));
        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(50, 20, 161, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        red_horizontalSlider = new QSlider(verticalLayoutWidget_3);
        red_horizontalSlider->setObjectName(QString::fromUtf8("red_horizontalSlider"));
        red_horizontalSlider->setMaximum(255);
        red_horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(red_horizontalSlider);

        green_horizontalSlider = new QSlider(verticalLayoutWidget_3);
        green_horizontalSlider->setObjectName(QString::fromUtf8("green_horizontalSlider"));
        green_horizontalSlider->setMaximum(255);
        green_horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(green_horizontalSlider);

        blue_horizontalSlider = new QSlider(verticalLayoutWidget_3);
        blue_horizontalSlider->setObjectName(QString::fromUtf8("blue_horizontalSlider"));
        blue_horizontalSlider->setMaximum(255);
        blue_horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(blue_horizontalSlider);

        verticalLayoutWidget_4 = new QWidget(groupBox);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 20, 21, 91));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_13 = new QLabel(verticalLayoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        label_12 = new QLabel(verticalLayoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(220, 20, 61, 91));

        gridLayout_2->addWidget(groupBox, 6, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setMaximumSize(QSize(65, 30));

        horizontalLayout_4->addWidget(label_14);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(20, 30));

        horizontalLayout_4->addWidget(label_15);

        x_img_location = new QTextEdit(scrollAreaWidgetContents);
        x_img_location->setObjectName(QString::fromUtf8("x_img_location"));
        x_img_location->setMaximumSize(QSize(65, 30));

        horizontalLayout_4->addWidget(x_img_location);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(25, 30));

        horizontalLayout_4->addWidget(label_16);

        y_img_location = new QTextEdit(scrollAreaWidgetContents);
        y_img_location->setObjectName(QString::fromUtf8("y_img_location"));
        y_img_location->setMaximumSize(QSize(65, 30));

        horizontalLayout_4->addWidget(y_img_location);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(75, 30));
        label_4->setMaximumSize(QSize(65, 60));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(15, 16777215));

        horizontalLayout->addWidget(label_6);

        label_img_longth = new QLabel(scrollAreaWidgetContents);
        label_img_longth->setObjectName(QString::fromUtf8("label_img_longth"));
        label_img_longth->setMinimumSize(QSize(25, 30));
        label_img_longth->setMaximumSize(QSize(35, 60));
        label_img_longth->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_img_longth);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(15, 16777215));

        horizontalLayout->addWidget(label_7);

        label_img_width = new QLabel(scrollAreaWidgetContents);
        label_img_width->setObjectName(QString::fromUtf8("label_img_width"));
        label_img_width->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_img_width);


        gridLayout_2->addLayout(horizontalLayout, 0, 3, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 2, 1, 10, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Word_Processingclass);
        QObject::connect(red_horizontalSlider, SIGNAL(valueChanged(int)), Word_Processingclass, SLOT(on_Slider_valueChanged(int)));
        QObject::connect(green_horizontalSlider, SIGNAL(valueChanged(int)), Word_Processingclass, SLOT(on_Slider_valueChanged(int)));
        QObject::connect(blue_horizontalSlider, SIGNAL(valueChanged(int)), Word_Processingclass, SLOT(on_Slider_valueChanged(int)));
        QObject::connect(change_pushButton, SIGNAL(clicked()), Word_Processingclass, SLOT(on_Btnchange_clicked()));
        QObject::connect(frame_checkBox, SIGNAL(clicked(bool)), Word_Processingclass, SLOT(on_chkBoxframe_clicked(bool)));
        QObject::connect(underline_checkBox, SIGNAL(clicked(bool)), Word_Processingclass, SLOT(on_chkBoxunderline_clicked(bool)));

        QMetaObject::connectSlotsByName(Word_Processingclass);
    } // setupUi

    void retranslateUi(QWidget *Word_Processingclass)
    {
        Word_Processingclass->setWindowTitle(QApplication::translate("Word_Processingclass", "Word_Processingclass", nullptr));
        change_pushButton->setText(QApplication::translate("Word_Processingclass", "\344\277\256\346\224\271\344\273\245\346\230\276\347\244\272\346\225\210\346\236\234", nullptr));
        label_3->setText(QApplication::translate("Word_Processingclass", "\350\276\223\345\205\245\346\226\207\345\255\227\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("Word_Processingclass", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("Word_Processingclass", "\345\217\226\346\266\210", nullptr));
        thickness_comboBox->setItemText(0, QApplication::translate("Word_Processingclass", "1", nullptr));
        thickness_comboBox->setItemText(1, QApplication::translate("Word_Processingclass", "2", nullptr));
        thickness_comboBox->setItemText(2, QApplication::translate("Word_Processingclass", "3", nullptr));
        thickness_comboBox->setItemText(3, QApplication::translate("Word_Processingclass", "4", nullptr));
        thickness_comboBox->setItemText(4, QApplication::translate("Word_Processingclass", "5", nullptr));

        fontFace_comboBox_2->setItemText(0, QApplication::translate("Word_Processingclass", "simplex", nullptr));
        fontFace_comboBox_2->setItemText(1, QApplication::translate("Word_Processingclass", "plain", nullptr));
        fontFace_comboBox_2->setItemText(2, QApplication::translate("Word_Processingclass", "duplex", nullptr));
        fontFace_comboBox_2->setItemText(3, QApplication::translate("Word_Processingclass", "complex", nullptr));
        fontFace_comboBox_2->setItemText(4, QApplication::translate("Word_Processingclass", "triplex", nullptr));
        fontFace_comboBox_2->setItemText(5, QApplication::translate("Word_Processingclass", "complex_small", nullptr));
        fontFace_comboBox_2->setItemText(6, QApplication::translate("Word_Processingclass", "script_simplex", nullptr));
        fontFace_comboBox_2->setItemText(7, QApplication::translate("Word_Processingclass", "script_complex", nullptr));

        fontScale_comboBox_3->setItemText(0, QApplication::translate("Word_Processingclass", "1", nullptr));
        fontScale_comboBox_3->setItemText(1, QApplication::translate("Word_Processingclass", "2", nullptr));
        fontScale_comboBox_3->setItemText(2, QApplication::translate("Word_Processingclass", "3", nullptr));
        fontScale_comboBox_3->setItemText(3, QApplication::translate("Word_Processingclass", "4", nullptr));
        fontScale_comboBox_3->setItemText(4, QApplication::translate("Word_Processingclass", "5", nullptr));
        fontScale_comboBox_3->setItemText(5, QApplication::translate("Word_Processingclass", "6", nullptr));
        fontScale_comboBox_3->setItemText(6, QApplication::translate("Word_Processingclass", "7", nullptr));
        fontScale_comboBox_3->setItemText(7, QApplication::translate("Word_Processingclass", "8", nullptr));
        fontScale_comboBox_3->setItemText(8, QApplication::translate("Word_Processingclass", "9", nullptr));
        fontScale_comboBox_3->setItemText(9, QApplication::translate("Word_Processingclass", "10", nullptr));

        label_8->setText(QApplication::translate("Word_Processingclass", "\347\254\224\347\224\273\347\262\227\347\273\206\357\274\232", nullptr));
        label_9->setText(QApplication::translate("Word_Processingclass", "\345\255\227\344\275\223\357\274\232", nullptr));
        label_10->setText(QApplication::translate("Word_Processingclass", "\345\255\227\345\217\267\357\274\232", nullptr));
        frame_checkBox->setText(QApplication::translate("Word_Processingclass", "\346\230\257\345\220\246\346\267\273\345\212\240\346\226\271\346\241\206", nullptr));
        underline_checkBox->setText(QApplication::translate("Word_Processingclass", "\346\230\257\345\220\246\346\267\273\345\212\240\344\270\213\345\210\222\347\272\277", nullptr));
        label_2->setText(QApplication::translate("Word_Processingclass", "\351\242\204\350\247\210\346\225\210\346\236\234", nullptr));
        groupBox->setTitle(QApplication::translate("Word_Processingclass", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        label_11->setText(QApplication::translate("Word_Processingclass", "\347\272\242", nullptr));
        label_13->setText(QApplication::translate("Word_Processingclass", "\347\273\277", nullptr));
        label_12->setText(QApplication::translate("Word_Processingclass", "\350\223\235", nullptr));
        label_14->setText(QApplication::translate("Word_Processingclass", "\345\233\276\347\211\207\344\275\215\347\275\256", nullptr));
        label_15->setText(QApplication::translate("Word_Processingclass", "x", nullptr));
        label_16->setText(QApplication::translate("Word_Processingclass", "y", nullptr));
        label_4->setText(QApplication::translate("Word_Processingclass", "\345\233\276\347\211\207\345\244\247\345\260\217\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Word_Processingclass", "\351\225\277", nullptr));
        label_img_longth->setText(QApplication::translate("Word_Processingclass", "1000", nullptr));
        label_7->setText(QApplication::translate("Word_Processingclass", "\345\256\275", nullptr));
        label_img_width->setText(QApplication::translate("Word_Processingclass", "1000", nullptr));
        label->setText(QApplication::translate("Word_Processingclass", "img", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Word_Processingclass: public Ui_Word_Processingclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_PROCESSINGCLASS_H
