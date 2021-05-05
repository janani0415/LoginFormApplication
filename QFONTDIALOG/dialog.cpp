#include "dialog.h"
#include "ui_dialog.h"
#include<QFont>
#include<QFontDialog>
#include<QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_CHOOSEFONT_clicked()
{
    bool ok;
        QFont font=QFontDialog::getFont(&ok,QFont("Cambria,10"),this);
        if(ok)
        {
            ui->label->setFont(font);
        }
        else
        {
            QMessageBox::information(this,"Message","User did not choose any font");
        }
}
