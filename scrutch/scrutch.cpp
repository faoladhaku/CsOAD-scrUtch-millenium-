#include "scrutch.h"
#include "ui_scrutch.h"
#include <QFrame>


scrutch::scrutch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::scrutch)
{
    ui->setupUi(this);
    QPixmap scrutch(":/image/Imagenes/gato.png");
    ui->label->setPixmap(scrutch);
}

scrutch::~scrutch()
{
    delete ui;
}


