#ifndef DETALLE_DIALOG_H
#define DETALLE_DIALOG_H

#include <QDialog>

namespace Ui {
class detalle_dialog;
}

class detalle_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit detalle_dialog(QWidget *parent = nullptr);
    ~detalle_dialog();

private:
    Ui::detalle_dialog *ui;
};

#endif // DETALLE_DIALOG_H
