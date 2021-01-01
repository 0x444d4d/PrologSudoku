#ifndef BOX_H
#define BOX_H

#include <QWidget>

namespace Ui {
class Box;
}

class Box : public QWidget
{
    Q_OBJECT

public:
    explicit Box(QWidget *parent = nullptr);
    ~Box();

    Ui::Box *ui;
};

#endif // BOX_H
