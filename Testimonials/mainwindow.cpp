#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testimonywindow.h"
#include "secondtestimony.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_testimonyButton_clicked()
{
    testimonyWindowPtr = new testimonyWindow(this);
    testimonyWindowPtr->show();
}
