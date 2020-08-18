#include "inventario_dialog.h"
#include "ui_inventario_dialog.h"

Inventario_Dialog::Inventario_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventario_Dialog)
{
    ui->setupUi(this);
}

Inventario_Dialog::~Inventario_Dialog()
{
    delete ui;
}
