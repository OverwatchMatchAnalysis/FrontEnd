#ifndef ANALYSISUI_H
#define ANALYSISUI_H

#include <QWidget>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <dirent.h>
#include "result.h"


namespace Ui {
class AnalysisUI;
}

class AnalysisUI : public QWidget
{
    Q_OBJECT

public:
    explicit AnalysisUI(QWidget *parent = 0);
    void GetPathFile(char*);
    ~AnalysisUI();

private slots:

    void on_Confirm_clicked();

    void on_Cancel_clicked();

    void on_AddSet_clicked();

private:
    Ui::AnalysisUI *ui;
    void LoadHeros();
    std::vector<std::string> ImageList;
    std::vector<std::string> NameList;
};

#endif // ANALYSISUI_H
