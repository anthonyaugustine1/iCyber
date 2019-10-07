#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPrinter printer;
    printer.setOrientation(QPrinter::Landscape);
    QPrintDialog *dialog = new QPrintDialog(&printer, this);
    if(dialog->exec() == QDialog::Rejected) return;
    QImage img1("f1.png");
    QImage img2("f2.png");
    QImage img3("f3.png");
    QImage img4("f4.png");
    QPainter painter(&printer);
    painter.drawImage(QPoint(0,0),img1);
    printer.newPage();
    painter.drawImage(QPoint(0,0),img2);
    printer.newPage();
    painter.drawImage(QPoint(0,0),img3);
    printer.newPage();
    painter.drawImage(QPoint(0,0),img4);
    painter.end();
    delete dialog;
}
