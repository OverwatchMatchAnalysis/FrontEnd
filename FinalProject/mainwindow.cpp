#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("OverWatch Game Analysis");
    this->setFixedSize(640,480);                         // Fix the screen size
    ui->Title->setText("OverWatch \nGame \nAnalysis");
}

void MainWindow::openAnalysis(){
    newAnaysisUI = new AnalysisUI();
    newAnaysisUI->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){            // Exit the software
    exit(0);
}


void MainWindow::on_pushButton_3_clicked(){          // Move to setting
    this->hide();
    Setting newSetting;
    newSetting.setModal(true);
    newSetting.exec();
    this->show();
}

void MainWindow::on_pushButton_2_clicked()          // Move to start(analysis)
{
    openAnalysis();
}
