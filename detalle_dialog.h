#ifndef DETALLE_DIALOG_H
#define DETALLE_DIALOG_H

#include <QDialog>

namespace Ui {
class detalle_dialog;
}

class QSqlRelationalTableModel;
class QSqlRelationalDelegate;

class detalle_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit detalle_dialog(QWidget *parent = nullptr);
    ~detalle_dialog();

private slots:
    void on_btnuevo_clicked();

    void on_bteliminar_clicked();

    void on_btactualizar_clicked();

private:
    Ui::detalle_dialog *ui;
    QSqlRelationalTableModel *mModel;
    QSqlRelationalDelegate *mDelegate;
};

#endif // DETALLE_DIALOG_H
