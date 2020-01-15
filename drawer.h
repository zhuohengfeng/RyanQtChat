#ifndef DRAWER_H
#define DRAWER_H

#include <QToolBox>
#include <QToolButton>

class Drawer : public QToolBox
{
    Q_OBJECT

public:
    Drawer(QWidget* parent = nullptr, Qt::WindowFlags f = nullptr);


private:
    QToolButton *toolBtn1;
    QToolButton *toolBtn2;
    QToolButton *toolBtn3;
    QToolButton *toolBtn4;
    QToolButton *toolBtn5;
    QToolButton *toolBtn6;
    QToolButton *toolBtn7;
    QToolButton *toolBtn8;
    QToolButton *toolBtn9;

public slots:


};

#endif // DRAWER_H
