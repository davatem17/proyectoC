#include "cliente_dialog.h"
#include "ui_cliente_dialog.h"
#include <QtSql/QSqlTableModel>

Cliente_Dialog::Cliente_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cliente_Dialog)
{
    ui->setupUi(this);
    mModel = new QSqlTableModel(this);
    mModel ->setTable("cliente");
    mModel ->select();
    ui->tableView->setModel(mModel);
}

Cliente_Dialog::~Cliente_Dialog()
{
    delete ui;
}
