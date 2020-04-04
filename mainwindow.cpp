#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->screenshotButton, SIGNAL(released()), this, SLOT(screenshot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::screenshot() {
    Kagami::screenshot("/Users/mattmoore/Desktop/screenshot.png");
}
