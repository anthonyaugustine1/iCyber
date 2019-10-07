#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "testimonywindow.h"
#include "secondtestimony.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_testimonyButton_clicked();

private:
    Ui::MainWindow *ui;
    testimonyWindow * testimonyWindowPtr;
};
#endif // MAINWINDOW_H
