#include "widget.h"
#include "drawer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 显示联系人列表
    Drawer drawer;
    drawer.resize(250, 700);
    drawer.show();

    return a.exec();
}
