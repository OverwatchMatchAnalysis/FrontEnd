#include "setting.h"
#include "ui_setting.h"
#include <iostream>

Setting::Setting(QWidget *parent) :             // Enter Settings
    QDialog(parent),
    ui(new Ui::Setting)
{
    this->setFixedSize(640,480);
    this->setWindowTitle("Setting");
    ui->setupUi(this);
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_buttonBox_accepted()  // Allow users to change dataset path
{
    Path = ui->Path->text();
}

QString Setting::GetPath(){
    return Path;
}
