#ifndef SCRUTCH_H
#define SCRUTCH_H

#include <QMainWindow>

namespace Ui {
class scrutch;
}

class scrutch : public QMainWindow
{
    Q_OBJECT

public:
    explicit scrutch(QWidget *parent = 0);
    ~scrutch();

private:
    Ui::scrutch *ui;
};

#endif // SCRUTCH_H
