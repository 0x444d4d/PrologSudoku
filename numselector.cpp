#include "numselector.h"
#include "ui_numselector.h"

NumSelector::NumSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NumSelector)
{
    ui->setupUi(this);
    ui->label->setModifiable(false);
    ui->label_2->setModifiable(false);
    ui->label_3->setModifiable(false);
    ui->label_4->setModifiable(false);
    ui->label_5->setModifiable(false);
    ui->label_6->setModifiable(false);
    ui->label_7->setModifiable(false);
    ui->label_8->setModifiable(false);
    ui->label_9->setModifiable(false);

    connect(ui->label, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_2, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_3, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_4, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_5, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_6, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_7, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_8, &SudokuNum::clicked, this, &NumSelector::numberClicked);
    connect(ui->label_9, &SudokuNum::clicked, this, &NumSelector::numberClicked);
}

NumSelector::~NumSelector()
{
    delete ui;
}

void NumSelector::numberClicked(unsigned short num)
{
    emit clicked(num);
    this->close();
}
