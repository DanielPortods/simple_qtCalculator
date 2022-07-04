#include "calculator.h"
#include "./ui_calculator.h"
#include "controller.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
    , CONTROLLER(new Controller)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_v, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_p, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_m, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_d, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
    connect(ui->pushButton_t, SIGNAL(released()), this, SLOT(calc_buttons_clicked()));
}

Calculator::~Calculator()
{
    delete ui;
    CONTROLLER->~Controller();
}

void Calculator::calc_buttons_clicked()
{
    QPushButton * btn = (QPushButton *) sender();

    QString current_screen = ui->screen->text();

    if ((current_screen.compare("0") && current_screen.compare("Erro!"))|| btn->text() == ',') ui->screen->setText(current_screen.append(btn->text()));
    else ui->screen->setText(btn->text());
}

void Calculator::on_pushButton_ac_clicked()
{
    ui->screen->setText("0");
}

void Calculator::on_pushButton_eq_clicked()
{
    string result = CONTROLLER->calculate(ui->screen->text().toStdString());
    ui->screen->setText(QString::fromStdString(result));
}

