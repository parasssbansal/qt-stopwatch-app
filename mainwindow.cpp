#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    millisecond=0;
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateTime);
    connect(ui->btnStart,&QPushButton::clicked,this,&MainWindow::startTimer);
    connect(ui->btnStop,&QPushButton::clicked,this,&MainWindow::stopTimer);
    connect(ui->btnReset,&QPushButton::clicked,this,&MainWindow::resetTimer);
    this->setStyleSheet(
        "QWidget {"
        " background-color: #121212;"
        " color: white;"
        "}"
        "QLabel {"
        " font-size: 32px;"
        " font-weight: bold;"
        " padding: 15px;"
        "}"
        "QPushButton {"
        " background-color: #2d2d2d;"
        " color: white;"
        " border-radius: 10px;"
        " padding: 10px 18px;"
        " font-size: 14px;"
        "}"
        "QPushButton:hover {"
        " background-color: #444;"
        "}"
        "QPushButton:pressed {"
        " background-color: #666;"
        "}"
        );
    ui->btnStart->setStyleSheet(
        "QPushButton { background-color: #2e7d32; }"
        "QPushButton:hover { background-color: #388e3c; }"
        );

    ui->btnStop->setStyleSheet(
        "QPushButton { background-color: #c62828; }"
        "QPushButton:hover { background-color: #d32f2f; }"
        );

    ui->btnReset->setStyleSheet(
        "QPushButton { background-color: #1565c0; }"
        "QPushButton:hover { background-color: #1976d2; }"
        );


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startTimer()
{
    timer->start(10);
}

void MainWindow::stopTimer()
{
    timer->stop();
}

void MainWindow::resetTimer()
{
    timer->stop();
    millisecond=0;
    ui->labelTime->setText("00:00:00");
}

void MainWindow::updateTime()
{
    millisecond+=10;
    int ms = (millisecond / 10) % 100;
    int sec = (millisecond / 1000) % 60;
    int min = (millisecond / 60000);
    QString timeText = QString("%1:%2:%3")
                           .arg(min, 2, 10, QChar('0'))
                           .arg(sec, 2, 10, QChar('0'))
                           .arg(ms, 2, 10, QChar('0'));

    ui->labelTime->setText(timeText);
}
