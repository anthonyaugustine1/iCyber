#ifndef TESTIMONYWINDOW_H
#define TESTIMONYWINDOW_H

#include <QDialog>
#include "secondtestimony.h"

namespace Ui {
class testimonyWindow;
}

class testimonyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit testimonyWindow(QWidget *parent = nullptr);
    ~testimonyWindow();

private slots:
    void on_viewMoreButton_clicked();

private:
    Ui::testimonyWindow *ui;
    secondTestimony * secondTestimonyPtr;
};

#endif // TESTIMONYWINDOW_H
