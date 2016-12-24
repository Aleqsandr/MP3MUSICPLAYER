#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sound.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void printdata();

private slots:

    void on_play_clicked();
    void on_stop_clicked();
    void on_volume_sliderMoved(int position);
    void on_position_sliderMoved(int position);
    void update();

    void on_position_sliderPressed();

    void on_position_sliderReleased();

    void on_next_clicked();

    void on_previous_clicked();

private:
    Ui::MainWindow *ui;
    Sound player;
    int previoustime;
    int slidervalue;
};

#endif // MAINWINDOW_H
