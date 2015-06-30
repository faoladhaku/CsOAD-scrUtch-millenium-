#include "scrutch.h"
#include "ui_scrutch.h"

scrutch::scrutch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::scrutch)
{
    ui->setupUi(this);
    QPixmap scrutch("C:/Users/toshiba/Desktop/CsOAD-scrUtch-millenium-/build-scrutch-Desktop_Qt_5_4_1_MinGW_32bit-Debug/release/gato.png");
    ui->label->setPixmap(scrutch);
}

scrutch::~scrutch()
{
    delete ui;
}

void scrutch::on_pushButton_clicked()
{

}
