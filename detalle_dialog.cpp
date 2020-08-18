#include "detalle_dialog.h"
#include "ui_detalle_dialog.h"

detalle_dialog::detalle_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detalle_dialog)
{
    ui->setupUi(this);
}

detalle_dialog::~detalle_dialog()
{
    delete ui;
}
