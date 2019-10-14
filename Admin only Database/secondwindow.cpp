#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"
#include <QMessageBox>



secondWindow::secondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondWindow)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/Users/austinm/Desktop/CustomerInfo.db");

    if(!mydb.open())
        this->ui->StatusLable->setText("Database Status: Not Connected");
    else {
        this->ui->StatusLable->setText("Database Status: Connected");
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
}

secondWindow::~secondWindow()
{
    delete ui;
}

void secondWindow::on_saveInfoButton_clicked()
{
     MainWindow conn;

     QString customerId, customerName, address, interestLevel, KeyCustomer;
     customerId = ui->txt_customerId->text();
     customerName = ui->txt_customerName->text();
     address = ui->txt_customerAddress->text();

     if(ui->radioButton_Low->isCheckable()){
         interestLevel = "Low";
     }
     if(ui->radioButton_Middle->isChecked()){
         interestLevel = "Middle";
     }
     if(ui->radioButton_High->isCheckable()){
         interestLevel = "High";
     }
     if(ui->radioButton_Yes->isCheckable()){
         KeyCustomer = "Yes";
     }

     if(ui->radioButton_No->isChecked()){
         KeyCustomer = "No";
     }

     conn.connOpen();
     QSqlQuery qry;
     qry.prepare("INSERT INTO CustomerInfo(CustomerID, Name, Address, InterestLevel, KeyCustomer) VALUES(:CustomerID, :Name, :Address, :InterestLevel, :KeyCustomer)");
     qry.bindValue(":CustomerID", customerId);
     qry.bindValue(":Name", customerName);
     qry.bindValue(":Address", address);
     qry.bindValue(":InterestLevel", interestLevel);
     qry.bindValue(":KeyCustomer", KeyCustomer);

     if(qry.exec()){
        QMessageBox::critical(this,tr("Save"), tr("Information Saved."));
        conn.connClose();
     }
     else{
         QMessageBox::critical(this, tr("error::"), qry.lastError().text());
     }
}
