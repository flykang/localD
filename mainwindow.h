#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QString>
#include <boost/regex.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString searchString;

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initilize();

private slots:
    void on_searchEdit_cursorPositionChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
