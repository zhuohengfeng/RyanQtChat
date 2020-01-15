#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(730, 450); // 设置固定大小
    setWindowTitle(tr("我的聊天"));

}

Widget::~Widget()
{
    delete ui;
}
