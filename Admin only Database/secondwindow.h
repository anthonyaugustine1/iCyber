#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class secondWindow;
}

class secondWindow : public QDialog
{
    Q_OBJECT



public:
    explicit secondWindow(QWidget *parent = nullptr);
    ~secondWindow();

private slots:
    void on_saveInfoButton_clicked();

private:
    Ui::secondWindow *ui;
};

#endif // SECONDWINDOW_H
