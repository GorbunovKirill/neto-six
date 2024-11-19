/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *te_debug;
    QPushButton *pb_clear;
    QLabel *lb_initNum;
    QPushButton *pb_start;
    QSpinBox *sb_initNum;
    QGroupBox *gb_synch;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_synchOff;
    QRadioButton *rb_mutexOn;
    QRadioButton *rb_qtConcur;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(445, 467);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        te_debug = new QTextEdit(centralwidget);
        te_debug->setObjectName("te_debug");
        te_debug->setReadOnly(true);

        gridLayout->addWidget(te_debug, 0, 0, 1, 2);

        pb_clear = new QPushButton(centralwidget);
        pb_clear->setObjectName("pb_clear");

        gridLayout->addWidget(pb_clear, 4, 0, 1, 2);

        lb_initNum = new QLabel(centralwidget);
        lb_initNum->setObjectName("lb_initNum");

        gridLayout->addWidget(lb_initNum, 3, 0, 1, 1);

        pb_start = new QPushButton(centralwidget);
        pb_start->setObjectName("pb_start");

        gridLayout->addWidget(pb_start, 5, 0, 1, 2);

        sb_initNum = new QSpinBox(centralwidget);
        sb_initNum->setObjectName("sb_initNum");
        sb_initNum->setMaximum(1000000000);

        gridLayout->addWidget(sb_initNum, 3, 1, 1, 1);

        gb_synch = new QGroupBox(centralwidget);
        gb_synch->setObjectName("gb_synch");
        gb_synch->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(gb_synch);
        verticalLayout->setObjectName("verticalLayout");
        rb_synchOff = new QRadioButton(gb_synch);
        rb_synchOff->setObjectName("rb_synchOff");

        verticalLayout->addWidget(rb_synchOff);

        rb_mutexOn = new QRadioButton(gb_synch);
        rb_mutexOn->setObjectName("rb_mutexOn");

        verticalLayout->addWidget(rb_mutexOn);

        rb_qtConcur = new QRadioButton(gb_synch);
        rb_qtConcur->setObjectName("rb_qtConcur");

        verticalLayout->addWidget(rb_qtConcur);


        gridLayout->addWidget(gb_synch, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 445, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(te_debug, sb_initNum);
        QWidget::setTabOrder(sb_initNum, pb_clear);
        QWidget::setTabOrder(pb_clear, pb_start);

        retranslateUi(MainWindow);
        QObject::connect(pb_clear, &QPushButton::clicked, te_debug, qOverload<>(&QTextEdit::clear));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RaceExample", nullptr));
        pb_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        lb_initNum->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\262\320\260\320\270\320\262\320\260\320\265\320\274\320\276\320\265 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        pb_start->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        gb_synch->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\321\205\321\200\320\276\320\275\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\320\276\321\202\320\276\320\272\320\276\320\262", nullptr));
        rb_synchOff->setText(QCoreApplication::translate("MainWindow", "\320\221\320\265\320\267 \321\201\320\270\320\275\321\205\321\200\320\276\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        rb_mutexOn->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\274\321\214\321\216\321\202\320\265\320\272\321\201\321\213", nullptr));
        rb_qtConcur->setText(QCoreApplication::translate("MainWindow", "Qt Concurrent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
