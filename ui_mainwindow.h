/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *play;
    QPushButton *stop;
    QSlider *position;
    QLabel *time;
    QLabel *length;
    QLabel *title;
    QPushButton *next;
    QPushButton *previous;
    QLabel *artwork;
    QLabel *artist;
    QLabel *album;
    QSlider *volume;
    QLabel *background;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 467);
        QPalette palette;
        QBrush brush(QColor(161, 177, 226, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        play = new QPushButton(centralwidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(370, 360, 51, 51));
        play->setAutoFillBackground(false);
        play->setStyleSheet(QString::fromUtf8("background-color: transparent;;\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("play.png"), QSize(), QIcon::Normal, QIcon::Off);
        play->setIcon(icon);
        play->setIconSize(QSize(40, 40));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(320, 360, 51, 51));
        stop->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop->setIcon(icon1);
        stop->setIconSize(QSize(40, 40));
        position = new QSlider(centralwidget);
        position->setObjectName(QString::fromUtf8("position"));
        position->setGeometry(QRect(40, 318, 661, 31));
        position->setOrientation(Qt::Horizontal);
        time = new QLabel(centralwidget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(40, 350, 91, 17));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(time->sizePolicy().hasHeightForWidth());
        time->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        time->setFont(font);
        time->setStyleSheet(QString::fromUtf8("color: white;"));
        length = new QLabel(centralwidget);
        length->setObjectName(QString::fromUtf8("length"));
        length->setGeometry(QRect(630, 350, 71, 16));
        sizePolicy.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy);
        length->setFont(font);
        length->setStyleSheet(QString::fromUtf8("color: white;"));
        length->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(330, 110, 401, 61));
        QFont font1;
        font1.setPointSize(34);
        font1.setBold(true);
        font1.setWeight(75);
        title->setFont(font1);
        title->setStyleSheet(QString::fromUtf8("color: white;"));
        title->setAlignment(Qt::AlignCenter);
        next = new QPushButton(centralwidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(420, 360, 51, 51));
        next->setAutoFillBackground(false);
        next->setStyleSheet(QString::fromUtf8("background-color: transparent;;\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("next.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon2);
        next->setIconSize(QSize(40, 40));
        previous = new QPushButton(centralwidget);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setGeometry(QRect(270, 360, 51, 51));
        previous->setAutoFillBackground(false);
        previous->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        previous->setIcon(icon3);
        previous->setIconSize(QSize(40, 40));
        artwork = new QLabel(centralwidget);
        artwork->setObjectName(QString::fromUtf8("artwork"));
        artwork->setGeometry(QRect(40, 40, 270, 270));
        artwork->setStyleSheet(QString::fromUtf8(""));
        artwork->setPixmap(QPixmap(QString::fromUtf8("artwork.jpg")));
        artwork->setScaledContents(true);
        artist = new QLabel(centralwidget);
        artist->setObjectName(QString::fromUtf8("artist"));
        artist->setGeometry(QRect(350, 170, 361, 31));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        artist->setFont(font2);
        artist->setStyleSheet(QString::fromUtf8("color: white;"));
        artist->setAlignment(Qt::AlignCenter);
        album = new QLabel(centralwidget);
        album->setObjectName(QString::fromUtf8("album"));
        album->setGeometry(QRect(350, 200, 361, 31));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        album->setFont(font3);
        album->setStyleSheet(QString::fromUtf8("color: white;"));
        album->setAlignment(Qt::AlignCenter);
        volume = new QSlider(centralwidget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(260, 420, 221, 31));
        volume->setValue(80);
        volume->setOrientation(Qt::Horizontal);
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 751, 481));
        background->setPixmap(QPixmap(QString::fromUtf8("background.jpg")));
        background->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        play->raise();
        stop->raise();
        position->raise();
        time->raise();
        length->raise();
        title->raise();
        next->raise();
        previous->raise();
        artwork->raise();
        artist->raise();
        album->raise();
        volume->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        play->setText(QString());
        stop->setText(QString());
        time->setText(QApplication::translate("MainWindow", "00:00", 0, QApplication::UnicodeUTF8));
        length->setText(QApplication::translate("MainWindow", "--:--", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("MainWindow", "TRACK TITLE", 0, QApplication::UnicodeUTF8));
        next->setText(QString());
        previous->setText(QString());
        artwork->setText(QString());
        artist->setText(QApplication::translate("MainWindow", "ARTIST", 0, QApplication::UnicodeUTF8));
        album->setText(QApplication::translate("MainWindow", "ALBUM", 0, QApplication::UnicodeUTF8));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
