#include <QApplication>
#include <QProcess>
#include <QCloseEvent>
#include "levelcompletedwindow.h"
#include "ui_levelcompletedwindow.h"

LevelCompletedWindow::LevelCompletedWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LevelCompletedWindow)
{
    ui->setupUi(this);
}

LevelCompletedWindow::~LevelCompletedWindow()
{
    delete ui;
}

void LevelCompletedWindow::on_yes_butt_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->applicationFilePath(), qApp->arguments());
}

void LevelCompletedWindow::on_no_butt_clicked()
{
    qApp->exit(0);
}

void LevelCompletedWindow::closeEvent(QCloseEvent *event)
{
    qApp->exit(0);
    event->accept();
}
