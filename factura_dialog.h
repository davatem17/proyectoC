#ifndef FACTURA_DIALOG_H
#define FACTURA_DIALOG_H

#include <QDialog>

namespace Ui {
class Factura_Dialog;
}

class QSqlRelationalTableModel;
class QSqlRelationalDelegate;

class Factura_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Factura_Dialog(QWidget *parent = nullptr);
    ~Factura_Dialog();

private slots:
    void on_btnuevo_clicked();

    void on_bteliminar_clicked();

    void on_btactualizar_clicked();

private:
    Ui::Factura_Dialog *ui;
    QSqlRelationalTableModel *mModel;
    QSqlRelationalDelegate *mDelegate;
};

#endif // FACTURA_DIALOG_H
