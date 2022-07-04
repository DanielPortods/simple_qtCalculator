#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "controller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void calc_buttons_clicked();
    void on_pushButton_ac_clicked();

    void on_pushButton_eq_clicked();

private:
    Ui::Calculator *ui;
    Controller *CONTROLLER;
};
#endif // CALCULATOR_H
