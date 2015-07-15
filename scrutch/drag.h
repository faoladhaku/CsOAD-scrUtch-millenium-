#ifndef DRAG_H
#define DRAG_H
#include <QDebug>
#include <QtWidgets>
#include <QDialog>
#include "boton.h"
#include "drop.h"
class drag : public boton
{
public:
    //drag();
    drag(QWidget *parent= NULL);
    void dropEvent(QDropEvent *ev) Q_DECL_OVERRIDE;
};

#endif // DRAG_H
