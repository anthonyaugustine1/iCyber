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

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if (username == "Admin" && password == "123")
    {       
        secondWindowPtr = new secondWindow(this);
        secondWindowPtr->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Credentials Invalid");
    }
}
