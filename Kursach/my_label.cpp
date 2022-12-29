#include "my_label.h"
#include "qwidget.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <mainwindow.h>
#include <QMessageBox>
#include <QColor>


my_label::my_label(QWidget *parent)
    : QLabel{parent}
{
    startPoint = QPoint(0, 0);
    pressed = false;
}

void my_label::mousePressEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        this->setPixmap(QPixmap::fromImage( this->image.scaled(this->size())));
        this->startPoint = ev->pos();
        pressed = true;
        //QMessageBox::information(this,"Оповещение","Выбрана начальная точка");
    }
}

void my_label::mouseMoveEvent(QMouseEvent *ev)
{
     if (pressed)
     {
        this->endPoint = ev->pos();
        emit draw_rectangle();
     }
}

void my_label::mouseReleaseEvent(QMouseEvent *ev)
{
         //this->setPixmap(QPixmap::fromImage( this->image.scaled(this->size())));
         this->endPoint = ev->pos();
         //QMessageBox::information(this,"Оповещение","Выбрана конечная точка");
         pressed = false;

}






