#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = 0);
    ~window();

private slots:

    void on_pushButton_clicked();

private:
    Ui::window *ui;
};

#endif // WINDOW_H
