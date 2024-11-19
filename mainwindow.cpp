#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtConcurrent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sb_initNum->setValue(200000);
    ui->rb_synchOff->setChecked(true);

    race1 = new Controller(&m);
    race2 = new Controller(&m);

    concurRace1 = new ExampleRace(&m);
    concurRace2 = new ExampleRace(&m);

    connect(race1, &Controller::sig_WorkFinish, this, &::MainWindow::on_raceFinished);
    connect(race2, &Controller::sig_WorkFinish, this, &::MainWindow::on_raceFinished);
    connect(concurRace1, &ExampleRace::sig_Finish, this, &::MainWindow::on_raceFinished);
    connect(concurRace2, &ExampleRace::sig_Finish, this, &::MainWindow::on_raceFinished);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete race1;
    delete race2;
    delete concurRace1;
    delete concurRace2;
}

void MainWindow::StartRace(void) {
    if (ui->rb_qtConcur->isChecked()) {
        ui->te_debug->append("Выполни ДЗ!");

        // Используем QtConcurrent для запуска DoWork
        QtConcurrent::run([this](){
            concurRace1->DoWork(&number, ui->rb_mutexOn->isChecked(), ui->sb_initNum->value());
        });
        QtConcurrent::run([this](){
            concurRace2->DoWork(&number, ui->rb_mutexOn->isChecked(), ui->sb_initNum->value());
        });
    }
    else {
        race1->operate(&number, ui->rb_mutexOn->isChecked(), ui->sb_initNum->value());
        race2->operate(&number, ui->rb_mutexOn->isChecked(), ui->sb_initNum->value());
    }
}



void MainWindow::on_pb_start_clicked()
{
    ui->pb_start->setEnabled(false);
    countFinish = 0;
    number = 0;
    StartRace();
}

void MainWindow::on_raceFinished()
{
    if (countFinish == 0) {
        countFinish++;
    } else {
        ui->te_debug->append("Искомое число равно: " + QString::number(number) + ", а должно быть " +
                             QString::number(ui->sb_initNum->value() * 2));
        ui->pb_start->setEnabled(true);
    }
}
