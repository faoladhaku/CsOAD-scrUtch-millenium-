#include "scrutch.h"
#include "ui_scrutch.h"

scrutch::scrutch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::scrutch)
{
    ui->setupUi(this);
}

scrutch::~scrutch()
{
    delete ui;
}
