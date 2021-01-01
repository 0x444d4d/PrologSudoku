#ifndef SUDOKUNUM_H
#define SUDOKUNUM_H

#include <QLabel>
#include <QObject>
#include <QWidget>

class SudokuNum : public QLabel
{
    Q_OBJECT
public:
    SudokuNum(QWidget *parent = nullptr);
    void setModifiable(bool policy);
    bool modifiable;

signals:
    void clicked(unsigned short num);
public slots:
    void updateNum(unsigned short num);
protected:
    void mousePressEvent(QMouseEvent *event);

};

#endif // SUDOKUNUM_H
