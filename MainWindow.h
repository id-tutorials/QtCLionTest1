//
// Created by idurdyev on 02.01.18.
//

#ifndef QTCLIONTEST1_MAINWINDOW_H
#define QTCLIONTEST1_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif //QTCLIONTEST1_MAINWINDOW_H
