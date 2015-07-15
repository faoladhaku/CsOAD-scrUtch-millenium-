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
    explicit scrutch(QWidget *parent = NULL);
    ~scrutch();

private slots:
    void on_pushButton_clicked();

private:
    Ui::scrutch *ui;
};

#endif // SCRUTCH_H
