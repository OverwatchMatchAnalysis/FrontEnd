#include "result.h"
#include "ui_result.h"

Result::Result(QWidget *parent) :           // Show the result of analyzation
    QDialog(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
}

Result::~Result()
{
    delete ui;
}

void Result::on_buttonBox_accepted()
{

}

void Result::on_buttonBox_rejected()
{

}
