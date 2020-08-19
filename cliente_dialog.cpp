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

void Cliente_Dialog::on_btnuevo_clicked()
{
	mModel->insertRow(mModel->rowCount());
}

void Cliente_Dialog::on_bteliminar_clicked()
{
	mModel->removeRow(ui->tableView->currentIndex().row());
}

void Cliente_Dialog::on_btactualizar_clicked()
{
	mModel->select();
}
