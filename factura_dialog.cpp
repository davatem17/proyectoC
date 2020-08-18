#include "factura_dialog.h"
#include "ui_factura_dialog.h"

Factura_Dialog::Factura_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Factura_Dialog)
{
    ui->setupUi(this);
}

Factura_Dialog::~Factura_Dialog()
{
    delete ui;
}
