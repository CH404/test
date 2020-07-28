#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "button_test.h"
#include <QListView>
#include <QDebug>
#include <QThread>
#include <QCoreApplication>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QListView *listView;
    QPushButton *button2;
protected slots:
    void clicked(){

        qDebug() << "button2 click";
        button2->resize(10,10);
        show();
         QCoreApplication::processEvents();
        while(1);
        //QThread::sleep(5);

    }


private:
   // Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
