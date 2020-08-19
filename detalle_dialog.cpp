#include "detalle_dialog.h"
#include "ui_detalle_dialog.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>

enum ColumnaFactura{
    ID,
    FACTURA,
    CANTIDAD,
    INVENTARIO
};

detalle_dialog::detalle_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detalle_dialog)
{
    ui->setupUi(this);
    mModel = new QSqlRelationalTableModel(this);
    mDelegate = new QSqlRelationalDelegate(this);

    mModel->setTable("detallefactura");
    mModel->select();
    mModel->setHeaderData(ID, Qt::Horizontal,"ID");
    mModel->setHeaderData(FACTURA, Qt::Horizontal,"FACTURA");
    mModel->setHeaderData(CANTIDAD, Qt::Horizontal,"CANTIDAD");
    mModel->setHeaderData(INVENTARIO, Qt::Horizontal,"INVENTARIO");
    mModel->setRelation(FACTURA, QSqlRelation("facturahead","id_factura","Factura"));
    mModel->setRelation(INVENTARIO, QSqlRelation("inventario","nombre_inventario","Inventario"));
    ui->tableView->setModel(mModel);
    ui->tableView->setItemDelegate(mDelegate);
}

detalle_dialog::~detalle_dialog()
{
    delete ui;
}

void detalle_dialog::on_btnuevo_clicked()
{
    mModel->insertRow(mModel->rowCount());
}

void detalle_dialog::on_bteliminar_clicked()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
}

void detalle_dialog::on_btactualizar_clicked()
{
    mModel->select();
}
