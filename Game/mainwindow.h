#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPixmap>
#include <QEvent>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent * event);
    int x;
    int y;

private:
    QPushButton * newGame;
    QPixmap * player;

public slots:
    void moveButton();
};

#endif // MAINWINDOW_H
