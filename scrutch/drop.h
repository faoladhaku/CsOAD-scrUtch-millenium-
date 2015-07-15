#ifndef DROP_H
#define DROP_H
#include <QDebug>
#include <QtWidgets>
#include "boton.h"

class drop : public boton
{
public:
    drop();
    //drop(QWidget *parent=NULL);
    void dropEvent(QDropEvent *ev);

};

#endif // DROP_H
