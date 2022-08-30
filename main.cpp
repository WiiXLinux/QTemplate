#include "mainwindow.h"
#include <QApplication>
#include "Important.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    ui = w.ui;

    println(ui);

    w.show();
    return a.exec();
}
