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
/*
class secciones:public QDialog
{
public:
    explicit secciones(const QString &fileName, QWidget *parent = 0);
private:
    QTabWidget *tabWidget;

};
*/
#endif // DRAG_H
