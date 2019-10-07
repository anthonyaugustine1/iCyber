#ifndef SECONDTESTIMONY_H
#define SECONDTESTIMONY_H

#include <QDialog>

namespace Ui {
class secondTestimony;
}

class secondTestimony : public QDialog
{
    Q_OBJECT

public:
    explicit secondTestimony(QWidget *parent = nullptr);
    ~secondTestimony();

private:
    Ui::secondTestimony *ui;
};

#endif // SECONDTESTIMONY_H
