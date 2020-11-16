#include "dialog.h"
#include "ui_dialog.h"

#include<iostream>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_exit_yes_no_accepted()
{
    qApp->exit();
    qDebug() << "Zamknieto aplikacje";
}

void Dialog::on_exit_yes_no_rejected()
{
    this -> close();// Zamykamy otwarte okno
    qDebug() << "Anulowano zamkniecie aplikacji";
}
