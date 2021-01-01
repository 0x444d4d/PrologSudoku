#include "box.h"
#include "ui_box.h"

Box::Box(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Box)
{
    ui->setupUi(this);
}

Box::~Box()
{
    delete ui;
}
