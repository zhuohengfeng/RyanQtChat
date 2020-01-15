#include "drawer.h"
#include <QGroupBox>
#include <QVBoxLayout>

Drawer::Drawer(QWidget *parent, Qt::WindowFlags f) : QToolBox (parent, f)
{
    setWindowTitle(tr("我的联系人"));
    setWindowIcon(QPixmap(":/images/qq.png"));

    this->toolBtn1 = new QToolButton();
    this->toolBtn1->setText(tr("网友1"));
    this->toolBtn1->setIcon(QPixmap(":/images/spqy.png"));
    this->toolBtn1->setIconSize(QPixmap(":/images/spqy.png").size());
    this->toolBtn1->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn2 = new QToolButton();
    this->toolBtn2->setText(tr("网友2"));
    this->toolBtn2->setIcon(QPixmap(":/images/ymrl.png"));
    this->toolBtn2->setIconSize(QPixmap(":/images/ymrl.png").size());
    this->toolBtn2->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn3 = new QToolButton();
    this->toolBtn3->setText(tr("网友3"));
    this->toolBtn3->setIcon(QPixmap(":/images/qq.png"));
    this->toolBtn3->setIconSize(QPixmap(":/images/qq.png").size());
    this->toolBtn3->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn4 = new QToolButton();
    this->toolBtn4->setText(tr("网友4"));
    this->toolBtn4->setIcon(QPixmap(":/images/Cherry.png"));
    this->toolBtn4->setIconSize(QPixmap(":/images/Cherry.png").size());
    this->toolBtn4->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn5 = new QToolButton();
    this->toolBtn5->setText(tr("网友5"));
    this->toolBtn5->setIcon(QPixmap(":/images/dr.png"));
    this->toolBtn5->setIconSize(QPixmap(":/images/dr.png").size());
    this->toolBtn5->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn6 = new QToolButton();
    this->toolBtn6->setText(tr("网友6"));
    this->toolBtn6->setIcon(QPixmap(":/images/jj.png"));
    this->toolBtn6->setIconSize(QPixmap(":/images/jj.png").size());
    this->toolBtn6->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn7 = new QToolButton();
    this->toolBtn7->setText(tr("网友7"));
    this->toolBtn7->setIcon(QPixmap(":/images/lswh.png"));
    this->toolBtn7->setIconSize(QPixmap(":/images/lswh.png").size());
    this->toolBtn7->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn8 = new QToolButton();
    this->toolBtn8->setText(tr("网友8"));
    this->toolBtn8->setIcon(QPixmap(":/images/qmnn.png"));
    this->toolBtn8->setIconSize(QPixmap(":/images/qmnn.png").size());
    this->toolBtn8->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn8->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    this->toolBtn9 = new QToolButton();
    this->toolBtn9->setText(tr("网友9"));
    this->toolBtn9->setIcon(QPixmap(":/images/wy.png"));
    this->toolBtn9->setIconSize(QPixmap(":/images/wy.png").size());
    this->toolBtn9->setAutoRaise(true); // 当鼠标离开时，按钮自动恢复成弹起状态
    this->toolBtn9->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮的文字显示在图标旁边

    QGroupBox* groupBox = new QGroupBox();
    QVBoxLayout* layout = new QVBoxLayout(groupBox);
    layout->setMargin(20);
    layout->setAlignment(Qt::AlignLeft);
    layout->addWidget(toolBtn1);
    layout->addWidget(toolBtn2);
    layout->addWidget(toolBtn3);
    layout->addWidget(toolBtn4);
    layout->addWidget(toolBtn5);
    layout->addWidget(toolBtn6);
    layout->addWidget(toolBtn7);
    layout->addWidget(toolBtn8);
    layout->addWidget(toolBtn9);
    layout->addStretch();

    this->addItem(groupBox, tr("联系人"));

    // 添加点击头像后的处理函数
    connect(toolBtn1, SIGNAL(clicked()), this, SLOT(showChatWidget1()));
    connect(toolBtn2, SIGNAL(clicked()), this, SLOT(showChatWidget2()));
    connect(toolBtn3, SIGNAL(clicked()), this, SLOT(showChatWidget3()));
    connect(toolBtn4, SIGNAL(clicked()), this, SLOT(showChatWidget4()));
    connect(toolBtn5, SIGNAL(clicked()), this, SLOT(showChatWidget5()));
    connect(toolBtn6, SIGNAL(clicked()), this, SLOT(showChatWidget6()));
    connect(toolBtn7, SIGNAL(clicked()), this, SLOT(showChatWidget7()));
    connect(toolBtn8, SIGNAL(clicked()), this, SLOT(showChatWidget8()));
    connect(toolBtn9, SIGNAL(clicked()), this, SLOT(showChatWidget9()));
}

void Drawer::showChatWidget1()
{
    chatWidget1 = new Widget(nullptr, toolBtn1->text());
    chatWidget1->setWindowIcon(toolBtn1->icon());
    chatWidget1->show();
}

void Drawer::showChatWidget2()
{
    chatWidget2 = new Widget(nullptr, toolBtn2->text());
    chatWidget2->setWindowIcon(toolBtn2->icon());
    chatWidget2->show();
}

void Drawer::showChatWidget3()
{
    chatWidget3 = new Widget(nullptr, toolBtn3->text());
    chatWidget3->setWindowIcon(toolBtn3->icon());
    chatWidget3->show();
}

void Drawer::showChatWidget4()
{
    chatWidget4 = new Widget(nullptr, toolBtn4->text());
    chatWidget4->setWindowIcon(toolBtn4->icon());
    chatWidget4->show();
}

void Drawer::showChatWidget5()
{
    chatWidget5 = new Widget(nullptr, toolBtn5->text());
    chatWidget5->setWindowIcon(toolBtn5->icon());
    chatWidget5->show();
}

void Drawer::showChatWidget6()
{
    chatWidget6 = new Widget(nullptr, toolBtn6->text());
    chatWidget6->setWindowIcon(toolBtn6->icon());
    chatWidget6->show();
}

void Drawer::showChatWidget7()
{
    chatWidget7 = new Widget(nullptr, toolBtn7->text());
    chatWidget7->setWindowIcon(toolBtn7->icon());
    chatWidget7->show();
}

void Drawer::showChatWidget8()
{
    chatWidget8 = new Widget(nullptr, toolBtn8->text());
    chatWidget8->setWindowIcon(toolBtn8->icon());
    chatWidget8->show();
}

void Drawer::showChatWidget9()
{
    chatWidget9 = new Widget(nullptr, toolBtn9->text());
    chatWidget9->setWindowIcon(toolBtn9->icon());
    chatWidget9->show();
}




















