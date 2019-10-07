#include "testimonywindow.h"
#include "ui_testimonywindow.h"

testimonyWindow::testimonyWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testimonyWindow)
{
    ui->setupUi(this);
}

testimonyWindow::~testimonyWindow()
{
    delete ui;
}

void testimonyWindow::on_viewMoreButton_clicked()
{
    secondTestimonyPtr = new secondTestimony(this);
    secondTestimonyPtr->show();
}
