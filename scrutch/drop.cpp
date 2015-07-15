#include "drop.h"

drop::drop()
{
    setMinimumSize(300,600);
    setFrameStyle(QFrame::Sunken | QFrame::StyledPanel);
    setAcceptDrops(true);
}

void drop::dropEvent(QDropEvent *ev)
{
    if (ev->mimeData()->hasFormat("application/x-dnditemdata")) {
        QByteArray itemData = ev->mimeData()->data("application/x-dnditemdata");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QPoint offset;
        dataStream >> pixmap >> offset;

        QLabel *new_icon = new QLabel(this);
        new_icon->setPixmap(pixmap);
        new_icon->move(ev->pos() - offset);
        new_icon->show();
        new_icon->setAttribute(Qt::WA_DeleteOnClose);

        if (ev->source() == this) {
            ev->setDropAction(Qt::MoveAction);
            ev->accept();
        } else {
            ev->acceptProposedAction();
        }
    } else {
        ev->ignore();
    }
}
