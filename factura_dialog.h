#ifndef FACTURA_DIALOG_H
#define FACTURA_DIALOG_H

#include <QDialog>

namespace Ui {
class Factura_Dialog;
}

class QSqlTableModel;

class Factura_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Factura_Dialog(QWidget *parent = nullptr);
    ~Factura_Dialog();

private:
    Ui::Factura_Dialog *ui;
    QSqlTableModel *mModel;
};

#endif // FACTURA_DIALOG_H
