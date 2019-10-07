#include "secondtestimony.h"
#include "ui_secondtestimony.h"

secondTestimony::secondTestimony(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondTestimony)
{
    ui->setupUi(this);
}

secondTestimony::~secondTestimony()
{
    delete ui;
}
