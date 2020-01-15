#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent, QString userName) :
    QWidget(parent),
    ui(new Ui::Widget),
    currentUser(userName)
{
    ui->setupUi(this);
    setFixedSize(730, 450); // 设置固定大小
    setWindowTitle(tr("和%1聊天中").arg(this->currentUser));
}

Widget::~Widget()
{
    delete ui;
}
