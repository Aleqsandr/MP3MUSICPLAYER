#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include "sound.h"
#include "music.h"
#include <cmath>
#include <QTimer>
#include <QPixmap>
#include <ctime>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);
    slidervalue = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printdata()
{
    ui->title->setText(QString(player.getcurrentmusic()->gettitle().toCString()));
    ui->artist->setText(QString(player.getcurrentmusic()->getartist().toCString()));
    ui->album->setText(QString(player.getcurrentmusic()->getalbum().toCString()));
    ui->length->setText(QString("%1:%2").arg(player.getcurrentmusic()->getminutes()).arg(player.getcurrentmusic()->getseconds()));
}

void MainWindow::on_play_clicked()
{
    QPixmap image("artwork.png");
    ui->artwork->setPixmap(image);
    if (!Mix_PlayingMusic())
    {
        player.loadmusic(player.getcurrent());
        player.getcurrentmusic()->setstarttime(time(0));
        ui->position->setMaximum(player.getcurrentmusic()->getlength());
    }
    printdata();
    player.play();
}

void MainWindow::on_stop_clicked()
{
    player.stop();
}

void MainWindow::on_volume_sliderMoved(int position)
{
    player.setVolume(position);
}

void MainWindow::on_position_sliderMoved(int position)
{
    ui->time->setText(QString("%1:%2").arg(position / 60).arg(position % 60));
    previoustime = time(0);
    player.getcurrentmusic()->setstarttime(previoustime - position);
    player.setPosition(position);
    slidervalue = position;
}

void MainWindow::update()
{
    if (Mix_PlayingMusic() && !Mix_PausedMusic())
    {
        int elapsed = time(0) - player.getcurrentmusic()->getstarttime();
        ui->time->setText(QString("%1:%2").arg(elapsed / 60).arg(elapsed % 60));
        ui->position->setValue(slidervalue);
        slidervalue++;
    }
}

void MainWindow::on_position_sliderPressed()
{
    previoustime = time(0);
}

void MainWindow::on_position_sliderReleased()
{
    // ui->time->setText(QString("%1: %2").arg().arg(elapsed % 60));
}

void MainWindow::on_next_clicked()
{
    if (player.getcurrent() < player.getplaylist().size() - 1)
    {
        player.nextmusic();
        printdata();
        cout << "[] " << player.getcurrentmusic()->gettitle() << " is now playing..." << endl;
        ui->position->setMaximum(player.getcurrentmusic()->getlength());
        slidervalue = 0;
        ui->position->setValue(slidervalue);
    }
    else
    {
        cout << "[] This is the end of the album." << endl;
    }
}

void MainWindow::on_previous_clicked()
{
    if (player.getcurrent() > 0)
    {
        player.previousmusic();
        printdata();
        cout << "[] " << player.getcurrentmusic()->gettitle() << " is now playing..." << endl;
        ui->position->setMaximum(player.getcurrentmusic()->getlength());
        slidervalue = 0;
        ui->position->setValue(slidervalue);
    }
    else
    {
        cout << "[] You're already at the beginning of the album." << endl;
    }
}
