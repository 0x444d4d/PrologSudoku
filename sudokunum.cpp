#include "sudokunum.h"
#include <QtDebug>
#include "box.h"
#include "numselector.h"

SudokuNum::SudokuNum(QWidget *parent) : QLabel(parent)
{
    modifiable = true;
}

void SudokuNum::setModifiable(bool policy)
{
    modifiable = policy;
}

void SudokuNum::updateNum(unsigned short num)
{
    qDebug() << "numero pulsado" << num;
    this->setText(QString::number(num));
}

void SudokuNum::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "mouse press event";
    if (modifiable) {
        NumSelector *getNum = new NumSelector();
        connect(getNum, &NumSelector::clicked,
                this, &SudokuNum::updateNum);
        getNum->show();
    } else {
        unsigned short num = this->text().toUShort();
        qDebug() << "current num" << num;
        emit clicked(num);
    }

}
