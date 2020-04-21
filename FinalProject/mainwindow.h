#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "setting.h"
#include "analysisui.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void SetPath(QString);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

public slots:
   void openAnalysis();

private:
    QString Path;
    Ui::MainWindow *ui;
    AnalysisUI *newAnaysisUI;
};

#endif // MAINWINDOW_H
