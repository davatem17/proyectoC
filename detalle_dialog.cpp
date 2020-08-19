#include "detalle_dialog.h"
#include "ui_detalle_dialog.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>

detalle_dialog::detalle_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detalle_dialog)
{
    ui->setupUi(this);
}

detalle_dialog::~detalle_dialog()
{
    delete ui;
    mModel = new QSqlRelationalTableModel(this);
    mDelegate = new QSqlRelationalDelegate(this);

    mModel->setTable("detallefactura");
    mModel->select();
     mModel->setRelation(1, QSqlRelation("facturahead","id_factura","Factura"));
      mModel->setRelation(3, QSqlRelation("inventario","id_inventario","Inventario"));
    ui->tableView->setModel(mModel);
    ui->tableView->setItemDelegate(mDelegate);
}
