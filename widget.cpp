#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(730, 450); // 设置固定大小
}

Widget::~Widget()
{
    delete ui;
}
