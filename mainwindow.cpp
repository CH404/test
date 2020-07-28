#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
   // , ui(new Ui::MainWindow)
{
  //  ui->setupUi(this);




    button2 = new QPushButton(this);

    //button2->setText("6666");
    button2->move(0,50);
   // button2->resize(100,100);
     button2->setIcon( QIcon( QPixmap(":/1.png").scaled(button2->rect().size())));
    qDebug() << "ssss";
     connect(button2,SIGNAL(clicked()),this, SLOT(clicked()));
     //listView = new QListView(this);
     //   listView->resize(100,200);


      //  button2->raise();
    //    button2->setVisible(true);
          //button2->setVisible(false);
        //  button2->setFlat(true);
}

MainWindow::~MainWindow()
{
   // delete ui;
     qDebug() << "dddd";
}

