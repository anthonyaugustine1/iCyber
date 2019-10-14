#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"
#include <QtSql>
#include <QtDebug>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    void connClose()
    {
        QSqlDatabase mydb;
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("/Users/austinm/Desktop/CustomerInfo.db");

        if(!mydb.open()){
            qDebug()<<("Database Status: Not Connected");
            return false;
        }
        else {
            qDebug()<<("Database Status: Connected");
            return true;
        }
    }

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    secondWindow * secondWindowPtr;
};

#endif // MAINWINDOW_H
