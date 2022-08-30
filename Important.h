#include <QApplication>
#include "ui_mainwindow.h"

static QTextStream qtout(stdout);
static QTextStream qtin(stdin);

template<class A> static void println(A text) {
    qtout << text;
    Qt::endl(qtout);
    }

// For this to work as it is intended, please make Ui::MainWindow.ui public, since it's private in default.
Ui::MainWindow *ui;
