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
}
