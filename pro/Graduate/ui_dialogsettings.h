/********************************************************************************
** Form generated from reading UI file 'dialogsettings.ui'
**
** Created: Fri Jun 15 00:12:13 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETTINGS_H
#define UI_DIALOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSettings
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBoxPointsPerPixel;
    QWidget *tab_2;
    QSlider *horizontalSliderFs;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *labeli;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBoxTimes;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelFs;
    QLabel *label_3;
    QWidget *tab_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSlider *horizontalSliderR;
    QSlider *horizontalSliderG;
    QSlider *horizontalSliderB;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSpinBox *spinBoxPeroids;
    QLabel *label_9;

    void setupUi(QDialog *DialogSettings)
    {
        if (DialogSettings->objectName().isEmpty())
            DialogSettings->setObjectName(QString::fromUtf8("DialogSettings"));
        DialogSettings->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(DialogSettings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, -1, 401, 261));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 29, 371, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        spinBoxPointsPerPixel = new QSpinBox(layoutWidget);
        spinBoxPointsPerPixel->setObjectName(QString::fromUtf8("spinBoxPointsPerPixel"));
        spinBoxPointsPerPixel->setMinimum(1);
        spinBoxPointsPerPixel->setValue(4);

        horizontalLayout_4->addWidget(spinBoxPointsPerPixel);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalSliderFs = new QSlider(tab_2);
        horizontalSliderFs->setObjectName(QString::fromUtf8("horizontalSliderFs"));
        horizontalSliderFs->setGeometry(QRect(30, 50, 331, 22));
        horizontalSliderFs->setMinimum(5);
        horizontalSliderFs->setMaximum(50);
        horizontalSliderFs->setSingleStep(1);
        horizontalSliderFs->setPageStep(5);
        horizontalSliderFs->setValue(5);
        horizontalSliderFs->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 50, 31, 21));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 50, 31, 21));
        labeli = new QLabel(tab_2);
        labeli->setObjectName(QString::fromUtf8("labeli"));
        labeli->setGeometry(QRect(10, 90, 57, 15));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 180, 164, 27));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        spinBoxTimes = new QSpinBox(widget);
        spinBoxTimes->setObjectName(QString::fromUtf8("spinBoxTimes"));
        spinBoxTimes->setMinimum(1);
        spinBoxTimes->setValue(4);

        horizontalLayout_2->addWidget(spinBoxTimes);

        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(3, 21, 391, 17));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelFs = new QLabel(widget1);
        labelFs->setObjectName(QString::fromUtf8("labelFs"));
        labelFs->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelFs);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 20, 281, 100));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        horizontalSliderR = new QSlider(layoutWidget1);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setPageStep(10);
        horizontalSliderR->setValue(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderR, 1, 1, 1, 1);

        horizontalSliderG = new QSlider(layoutWidget1);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderG, 3, 1, 1, 1);

        horizontalSliderB = new QSlider(layoutWidget1);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderB, 4, 1, 1, 1);

        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 120, 183, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        spinBoxPeroids = new QSpinBox(layoutWidget2);
        spinBoxPeroids->setObjectName(QString::fromUtf8("spinBoxPeroids"));
        spinBoxPeroids->setMinimum(1);
        spinBoxPeroids->setValue(1);

        horizontalLayout_3->addWidget(spinBoxPeroids);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 0, 91, 16));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(DialogSettings);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DialogSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogSettings)
    {
        DialogSettings->setWindowTitle(QApplication::translate("DialogSettings", "Dialog", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DialogSettings", "PointsPerPixel:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogSettings", "General", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogSettings", "<-", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DialogSettings", "->", 0, QApplication::UnicodeUTF8));
        labeli->setText(QApplication::translate("DialogSettings", "i = 10", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogSettings", "N times sampling:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogSettings", "Sampling Rate: 10MHz/i = ", 0, QApplication::UnicodeUTF8));
        labelFs->setText(QApplication::translate("DialogSettings", "1000", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogSettings", "kHz", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogSettings", "D/A Parameters", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogSettings", "Red", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogSettings", "Green", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogSettings", "Blue", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogSettings", "Peroids to display:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialogSettings", "Curve Color:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DialogSettings", "Curve", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSettings: public Ui_DialogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETTINGS_H
