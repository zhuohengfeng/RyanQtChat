#include "widget.h"
#include "drawer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    Drawer drawer;
    drawer.show();

    return a.exec();
}
