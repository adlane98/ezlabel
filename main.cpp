#include <QApplication>
#include <QLabel>
#include <QPushButton>

#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow mw;
    mw.show();
    return QApplication::exec();
}
