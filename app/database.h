#ifndef DB_CONNECT_H
#define DB_CONNECT_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>


class db_connect
{

public:
    db_connect();
    ~db_connect();

    void connect(Ui::MainWindow *ui);
    void disconnect();
    bool user_connect(QString, QString);

private:
    //QSqlDatabase m_db;
    Ui::MainWindow *ref_to_ui;
    QSqlQueryModel *querymodel;
    QSqlDatabase db;
};

#endif // DB_CONNECT_H
