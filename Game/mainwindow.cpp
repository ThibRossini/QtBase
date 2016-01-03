#include "mainwindow.h"

#include <QPainter>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setFixedSize(600, 600);
    this->setWindowTitle("Qt Test");

    newGame = new QPushButton("Click me !", this);
    newGame->move(250,300);

    connect(newGame, SIGNAL(clicked()), this, SLOT(moveButton()));

    player = new QPixmap("/personnal-project/QtBase/Game/Pictures/square.png");
    x = 0;
    y = 0;

}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.drawPixmap(x, y, 100, 100, *player);
}

void MainWindow::moveButton()
{
    x += 10;
    this->update();
}
