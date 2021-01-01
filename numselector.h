#ifndef NUMSELECTOR_H
#define NUMSELECTOR_H

#include <QWidget>

namespace Ui {
class NumSelector;
}

class NumSelector : public QWidget
{
    Q_OBJECT

public:
    explicit NumSelector(QWidget *parent = nullptr);
    ~NumSelector();
signals:
    void clicked(unsigned short num);
public slots:
    void numberClicked(unsigned short num);

private:
    Ui::NumSelector *ui;
};

#endif // NUMSELECTOR_H
