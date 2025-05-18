#include "mainwindow.h"
#include "ui_mainwindow.h"
QImage im(400,400,QImage::Format_RGB32);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double x1=100,y1=50,x2=200,y2=50,dx,dy,x,y;
    double steps,xincrement,yincrement;

    dx=x2-x1;
    dy=y2-y1;

    if(qAbs(dx)>qAbs(dy))
         steps=qAbs(dx);
    else
         steps=qAbs(dy);

    xincrement=dx/steps;
    yincrement=dy/steps;


    x=x1+0.5;
    y=y1+0.5;


    for(int k=1;k<steps;k++)
    {
        x+=xincrement;
        y+=yincrement;
        im.setPixel(x,y,qRgb(255,0,0));
    }

    ui->label->setPixmap(QPixmap::fromImage(im));

}

void MainWindow::on_pushButton_2_clicked()
{
    double x1=100,y1=100,x2=200,y2=100,dx,dy,x,y;
    double steps,xincrement,yincrement;

    dx=x2-x1;
    dy=y2-y1;

    if(qAbs(dx)>qAbs(dy))
         steps=qAbs(dx);
    else
         steps=qAbs(dy);

    xincrement=dx/steps;
    yincrement=dy/steps;


    x=x1+0.5;
    y=y1+0.5;



    for(int k=1;k<steps;k++)
    {
        if(k%2==0)
        im.setPixel(x,y,qRgb(0,255,0));
        x+=xincrement;
        y+=yincrement;

    }

    ui->label->setPixmap(QPixmap::fromImage(im));


}

void MainWindow::on_pushButton_3_clicked()
{
    double x1=100,y1=150,x2=200,y2=150,dx,dy,x,y;
    double steps,xincrement,yincrement;

    dx=x2-x1;
    dy=y2-y1;

    if(qAbs(dx)>qAbs(dy))
         steps=qAbs(dx);
    else
         steps=qAbs(dy);

    xincrement=dx/steps;
    yincrement=dy/steps;


    x=x1+0.5;
    y=y1+0.5;


    for(int k=1;k<steps;k++)
    {
        if(k%10<5)
        im.setPixel(x,y,qRgb(255,255,0));
        x+=xincrement;
        y+=yincrement;

    }

    ui->label->setPixmap(QPixmap::fromImage(im));

}

void MainWindow::on_pushButton_4_clicked()
{
    double x1=100,y1=200,x2=200,y2=200,dx,dy,x,y;
    double steps,xincrement,yincrement;
    int th=4;

    dx=x2-x1;
    dy=y2-y1;

    if(qAbs(dx)>qAbs(dy))
         steps=qAbs(dx);
    else
         steps=qAbs(dy);

    xincrement=dx/steps;
    yincrement=dy/steps;


    x=x1+0.5;
    y=y1+0.5;


    for(int k=1;k<steps;k++)
    {
        for(int j=0;j<th;j++)
        im.setPixel(x,y+j,qRgb(255,0,255));
        x+=xincrement;
        y+=yincrement;
    }

    ui->label->setPixmap(QPixmap::fromImage(im));

}

void MainWindow::on_pushButton_5_clicked()
{
    double x1=100,y1=250,x2=200,y2=250,dx,dy,x,y;
    double steps,xincrement,yincrement;

    dx=x2-x1;
    dy=y2-y1;

    if(qAbs(dx)>qAbs(dy))
         steps=qAbs(dx);
    else
         steps=qAbs(dy);

    xincrement=dx/steps;
    yincrement=dy/steps;


    x=x1+0.5;
    y=y1+0.5;


    for(int k=1;k<steps;k++)
    {
        if((k%10<5)||(k%10==7))
        im.setPixel(x,y,qRgb(255,150,0));
        x+=xincrement;
        y+=yincrement;

    }

    ui->label->setPixmap(QPixmap::fromImage(im));

}

