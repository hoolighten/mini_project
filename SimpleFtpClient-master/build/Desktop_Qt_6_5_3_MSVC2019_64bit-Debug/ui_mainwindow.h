/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QLabel *label;
    QLineEdit *lineEdit_Port;
    QLineEdit *lineEdit_Server;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_LocalPath;
    QLabel *label_9;
    QLabel *label_6;
    QToolButton *toolButton_LocalPath;
    QLineEdit *lineEdit_FTPPath;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Download;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Upload;
    QGridLayout *gridLayout_6;
    QLabel *label_Byte;
    QProgressBar *progressBar;
    QTextEdit *textEdit_Console;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(543, 475);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        lineEdit_Username = new QLineEdit(centralWidget);
        lineEdit_Username->setObjectName("lineEdit_Username");

        gridLayout->addWidget(lineEdit_Username, 1, 1, 1, 1);

        lineEdit_Password = new QLineEdit(centralWidget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 1, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName("lineEdit_Port");

        gridLayout->addWidget(lineEdit_Port, 0, 3, 1, 1);

        lineEdit_Server = new QLineEdit(centralWidget);
        lineEdit_Server->setObjectName("lineEdit_Server");

        gridLayout->addWidget(lineEdit_Server, 0, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_LocalPath = new QLineEdit(groupBox);
        lineEdit_LocalPath->setObjectName("lineEdit_LocalPath");

        gridLayout_5->addWidget(lineEdit_LocalPath, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout_5->addWidget(label_9, 4, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout_5->addWidget(label_6, 2, 0, 1, 1);

        toolButton_LocalPath = new QToolButton(groupBox);
        toolButton_LocalPath->setObjectName("toolButton_LocalPath");

        gridLayout_5->addWidget(toolButton_LocalPath, 1, 1, 1, 1);

        lineEdit_FTPPath = new QLineEdit(groupBox);
        lineEdit_FTPPath->setObjectName("lineEdit_FTPPath");

        gridLayout_5->addWidget(lineEdit_FTPPath, 3, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName("gridLayout_8");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        pushButton_Download = new QPushButton(groupBox);
        pushButton_Download->setObjectName("pushButton_Download");

        gridLayout_8->addWidget(pushButton_Download, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Upload = new QPushButton(groupBox);
        pushButton_Upload->setObjectName("pushButton_Upload");

        gridLayout_8->addWidget(pushButton_Upload, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_8, 5, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_5, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName("gridLayout_6");
        label_Byte = new QLabel(centralWidget);
        label_Byte->setObjectName("label_Byte");

        gridLayout_6->addWidget(label_Byte, 0, 0, 1, 2);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        gridLayout_6->addWidget(progressBar, 1, 0, 1, 2);

        textEdit_Console = new QTextEdit(centralWidget);
        textEdit_Console->setObjectName("textEdit_Console");

        gridLayout_6->addWidget(textEdit_Console, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_6, 2, 0, 1, 1);

        gridLayout_3->setRowStretch(2, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 543, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_Server, lineEdit_Port);
        QWidget::setTabOrder(lineEdit_Port, lineEdit_Username);
        QWidget::setTabOrder(lineEdit_Username, lineEdit_Password);
        QWidget::setTabOrder(lineEdit_Password, lineEdit_LocalPath);
        QWidget::setTabOrder(lineEdit_LocalPath, toolButton_LocalPath);
        QWidget::setTabOrder(toolButton_LocalPath, lineEdit_FTPPath);
        QWidget::setTabOrder(lineEdit_FTPPath, pushButton_Download);
        QWidget::setTabOrder(pushButton_Download, pushButton_Upload);
        QWidget::setTabOrder(pushButton_Upload, textEdit_Console);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Server", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "FTP", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Local Path", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ex) /home/home.exe", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "FTP Path", nullptr));
        toolButton_LocalPath->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButton_Download->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        pushButton_Upload->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        label_Byte->setText(QCoreApplication::translate("MainWindow", "0 / 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
