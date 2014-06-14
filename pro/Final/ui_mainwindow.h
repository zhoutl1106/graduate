/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Mar 14 14:42:16 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *curveWidget;
    QPushButton *outputButton;
    QWidget *parameterPanelWidget;
    QLabel *logoLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QComboBox *comboBox;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setAnimated(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        curveWidget = new QWidget(centralWidget);
        curveWidget->setObjectName(QString::fromUtf8("curveWidget"));
        curveWidget->setGeometry(QRect(0, 0, 450, 300));
        outputButton = new QPushButton(centralWidget);
        outputButton->setObjectName(QString::fromUtf8("outputButton"));
        outputButton->setGeometry(QRect(660, 290, 120, 120));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        outputButton->setFont(font);
        outputButton->setIconSize(QSize(100, 100));
        parameterPanelWidget = new QWidget(centralWidget);
        parameterPanelWidget->setObjectName(QString::fromUtf8("parameterPanelWidget"));
        parameterPanelWidget->setGeometry(QRect(410, 0, 350, 300));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times"));
        font1.setPointSize(10);
        parameterPanelWidget->setFont(font1);
        logoLabel = new QLabel(centralWidget);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(10, 290, 128, 128));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(211, 301, 361, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times"));
        font2.setPointSize(7);
        label_10->setFont(font2);

        horizontalLayout->addWidget(label_10);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font2);

        horizontalLayout->addWidget(comboBox);

        MainWindow->setCentralWidget(centralWidget);
        curveWidget->raise();
        outputButton->raise();
        parameterPanelWidget->raise();
        logoLabel->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Synthetical Acoustic System Debugger", 0, QApplication::UnicodeUTF8));
        outputButton->setText(QString());
        logoLabel->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Choose a synchrony method:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Choose a synchrony method", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "b", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "c", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
