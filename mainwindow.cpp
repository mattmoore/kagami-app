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
//    QScreen *screen = QGuiApplication::primaryScreen();
//    if (const QWindow *window = windowHandle())
//        screen = window->screen();
//    if (!screen)
//        return;
//    screen->grabWindow(0);
    Kagami kagami;
    kagami.screenshot("/Users/mattmoore/Desktop/screenshot.png");
}
