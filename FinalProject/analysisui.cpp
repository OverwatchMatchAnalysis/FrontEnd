#include "analysisui.h"
#include <iostream>
#include <QMessageBox>
#include "ui_analysisui.h"

AnalysisUI::AnalysisUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalysisUI)
{
    GetPathFile("image\\icon");
    ui->setupUi(this);
    LoadHeros();
    this->setFixedSize(960,720);
    this->setWindowTitle("Let's Do Analysis!");
}

AnalysisUI::~AnalysisUI()
{
    delete ui;
}

void AnalysisUI::LoadHeros(){                // Load Heros in combobox
    for(int i = 0; i < NameList.size(); i++){
        std::string temppath = ":/image/icon/" + ImageList[i];
        QString qtemppath = QString::fromUtf8(temppath.c_str());
        QString qtempname = QString::fromUtf8(NameList[i].c_str());
        ui->Member1->addItem(QIcon(qtemppath), qtempname);
        ui->Member2->addItem(QIcon(qtemppath), qtempname);
        ui->Member3->addItem(QIcon(qtemppath), qtempname);
        ui->Member4->addItem(QIcon(qtemppath), qtempname);
        ui->Member5->addItem(QIcon(qtemppath), qtempname);
    }
}

void AnalysisUI::on_Confirm_clicked()        // Move to Analyzation
{
    Result newResult;
    newResult.setModal(true);
    newResult.exec();
}

void AnalysisUI::on_Cancel_clicked()
{
    this->close();
}


void AnalysisUI::GetPathFile(char* path){  // Read Heros' names from a path
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (dir == NULL) {
       QMessageBox::information(this,"title","Error On Load Icon...");
       exit(-1);
    }
    while ((entry = readdir(dir)) != NULL) {
        std::string temp = entry->d_name;
        if((temp != ".") && (temp != "..")){
            ImageList.push_back(temp);
            std::string Name = temp.substr(0,temp.length()-4);
            Name[0] = toupper(Name[0]);
            NameList.push_back(Name);
        }
    }
    closedir(dir);
}

void AnalysisUI::on_AddSet_clicked(){  // Profile image reference: https://playoverwatch.com/en-us/heroes
    std::string Hero1path = ":/image/Profile/" + ui->Member1->currentText().toStdString() + ".PNG";
    std::string Hero2path = ":/image/Profile/" + ui->Member2->currentText().toStdString() + ".PNG";
    std::string Hero3path = ":/image/Profile/" + ui->Member3->currentText().toStdString() + ".PNG";
    std::string Hero4path = ":/image/Profile/" + ui->Member4->currentText().toStdString() + ".PNG";
    std::string Hero5path = ":/image/Profile/" + ui->Member5->currentText().toStdString() + ".PNG";
    QPixmap pixmap1(QString::fromUtf8(Hero1path.c_str()));
    QPixmap pixmap2(QString::fromUtf8(Hero2path.c_str()));
    QPixmap pixmap3(QString::fromUtf8(Hero3path.c_str()));
    QPixmap pixmap4(QString::fromUtf8(Hero4path.c_str()));
    QPixmap pixmap5(QString::fromUtf8(Hero5path.c_str()));
    ui->label_1->setPixmap(pixmap1);
    ui->label_2->setPixmap(pixmap2);
    ui->label_3->setPixmap(pixmap3);
    ui->label_4->setPixmap(pixmap4);
    ui->label_5->setPixmap(pixmap5);
}
