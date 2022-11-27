#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->sliderX, SIGNAL(valueChanged(int)),ui->spinBoxX, SLOT(setValue(int)));
    connect(ui->sliderY, SIGNAL(valueChanged(int)),ui->spinBoxY, SLOT(setValue(int)));
    connect(ui->sliderZ, SIGNAL(valueChanged(int)),ui->spinBoxZ, SLOT(setValue(int)));
    connect(ui->spinBoxX, SIGNAL(valueChanged(int)),ui->sliderX, SLOT(setValue(int)));
    connect(ui->spinBoxY, SIGNAL(valueChanged(int)),ui->sliderY, SLOT(setValue(int)));
    connect(ui->spinBoxZ, SIGNAL(valueChanged(int)),ui->sliderZ, SLOT(setValue(int)));
    connect(ui->spinBoxX, SIGNAL(valueChanged(int)),ui->widget, SLOT(setXRotation(int)));
    connect(ui->spinBoxY, SIGNAL(valueChanged(int)),ui->widget, SLOT(setYRotation(int)));
    connect(ui->spinBoxZ, SIGNAL(valueChanged(int)),ui->widget, SLOT(setZRotation(int)));
    connect(ui->widget,SIGNAL(xRotationChanged(int)),ui->spinBoxX,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(yRotationChanged(int)),ui->spinBoxY,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(zRotationChanged(int)),ui->spinBoxZ,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::parseArgs()
{
    return ui->widget->parse_command_line();
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key()==Qt::Key_X &&
            (event->modifiers() & Qt::ControlModifier)){
        close();
        event->accept();
    }
}

