#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr, QString text=nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    QString currentUser;
};

#endif // WIDGET_H
