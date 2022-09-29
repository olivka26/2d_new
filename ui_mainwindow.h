/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    MyGLWidget *widget;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QSlider *sliderY;
    QLabel *label_5;
    QLabel *label_3;
    QSlider *sliderZ;
    QSpinBox *spinBoxY;
    QSlider *sliderX;
    QLabel *label;
    QSpinBox *spinBoxZ;
    QSpinBox *spinBoxX;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(772, 639);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new MyGLWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(widget);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sliderY = new QSlider(centralwidget);
        sliderY->setObjectName(QStringLiteral("sliderY"));
        sliderY->setMinimum(-180);
        sliderY->setMaximum(180);
        sliderY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderY, 1, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        sliderZ = new QSlider(centralwidget);
        sliderZ->setObjectName(QStringLiteral("sliderZ"));
        sliderZ->setMinimum(-180);
        sliderZ->setMaximum(180);
        sliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderZ, 2, 1, 1, 1);

        spinBoxY = new QSpinBox(centralwidget);
        spinBoxY->setObjectName(QStringLiteral("spinBoxY"));
        spinBoxY->setMinimum(-180);
        spinBoxY->setMaximum(180);

        gridLayout->addWidget(spinBoxY, 1, 2, 1, 1);

        sliderX = new QSlider(centralwidget);
        sliderX->setObjectName(QStringLiteral("sliderX"));
        sliderX->setMinimum(-180);
        sliderX->setMaximum(180);
        sliderX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderX, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxZ = new QSpinBox(centralwidget);
        spinBoxZ->setObjectName(QStringLiteral("spinBoxZ"));
        spinBoxZ->setMinimum(-180);
        spinBoxZ->setMaximum(180);

        gridLayout->addWidget(spinBoxZ, 2, 2, 1, 1);

        spinBoxX = new QSpinBox(centralwidget);
        spinBoxX->setObjectName(QStringLiteral("spinBoxX"));
        spinBoxX->setMinimumSize(QSize(100, 0));
        spinBoxX->setMinimum(-180);
        spinBoxX->setMaximum(180);

        gridLayout->addWidget(spinBoxX, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 772, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("MainWindow", "rotate:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        label->setText(QApplication::translate("MainWindow", "X:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
