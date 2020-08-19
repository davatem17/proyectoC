#include "factura_dialog.h"
#include "ui_factura_dialog.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>

enum ColumnaFactura{
    ID,
    CEDULA,
    FECHA
};

Factura_Dialog::Factura_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Factura_Dialog)
{
    ui->setupUi(this);
    mModel = new QSqlRelationalTableModel(this);
    mDelegate = new QSqlRelationalDelegate(this);

    mModel->setTable("facturahead");
    mModel->select();
    mModel->setHeaderData(ID, Qt::Horizontal, "ID");
    mModel->setHeaderData(CEDULA, Qt::Horizontal, "CEDULA");
    mModel->setHeaderData(FECHA, Qt::Horizontal, "FECHA");
    mModel->setRelation(CEDULA, QSqlRelation("cliente","cedula_cliente","Cedula"));
    ui->tableView->setModel(mModel);
    ui->tableView->setItemDelegate(mDelegate);
}

Factura_Dialog::~Factura_Dialog()
{
    delete ui;
}
