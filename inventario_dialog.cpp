#include "inventario_dialog.h"
#include "ui_inventario_dialog.h"
#include <QtSql/QSqlTableModel>

Inventario_Dialog::Inventario_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventario_Dialog)
{
    ui->setupUi(this);
    mModel = new QSqlTableModel(this);
    mModel ->setTable("inventario");
    mModel ->select();
    ui->tableView->setModel(mModel);
}

Inventario_Dialog::~Inventario_Dialog()
{
    delete ui;
}
