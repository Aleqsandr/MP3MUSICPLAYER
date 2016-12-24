#include <iostream>
#include "window.h"
#include "ui_window.h"

using namespace std;

window::window(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::window)
    {
        ui->setupUi(this);
    }

    window::~window()
    {
        delete ui;
    }
