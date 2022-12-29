/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    my_label *label_img;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_min;
    QLabel *label_2;
    QLabel *label_max;
    QLabel *label_3;
    QLabel *label_midl;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *btn_choose;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(810, 630);
        MainWindow->setMaximumSize(QSize(810, 630));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_img = new my_label(centralwidget);
        label_img->setObjectName(QString::fromUtf8("label_img"));
        label_img->setGeometry(QRect(10, 10, 781, 511));
        label_img->setMouseTracking(true);
        label_img->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 530, 291, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_min = new QLabel(layoutWidget);
        label_min->setObjectName(QString::fromUtf8("label_min"));
        label_min->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_min, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_max = new QLabel(layoutWidget);
        label_max->setObjectName(QString::fromUtf8("label_max"));
        label_max->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_max, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_midl = new QLabel(layoutWidget);
        label_midl->setObjectName(QString::fromUtf8("label_midl"));
        label_midl->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_midl, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(600, 530, 195, 33));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        btn_choose = new QPushButton(layoutWidget1);
        btn_choose->setObjectName(QString::fromUtf8("btn_choose"));
        btn_choose->setEnabled(true);

        gridLayout_2->addWidget(btn_choose, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Color Intensity detector", nullptr));
        label_img->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_min->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214: ", nullptr));
        label_max->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214: ", nullptr));
        label_midl->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\200\320\270\321\201\320\276\320\262\320\272\320\260", nullptr));
        btn_choose->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
