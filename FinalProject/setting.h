#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = 0);
    QString GetPath();
    ~Setting();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Setting *ui;
    QString Path;
};

#endif // SETTING_H
