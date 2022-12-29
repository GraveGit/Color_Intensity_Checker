#ifndef MY_LABEL_H
#define MY_LABEL_H
#include <QLabel>
#include <QMouseEvent>
#include <QPoint>
#include <mainwindow.h>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class my_label : public QLabel
{
    Q_OBJECT
public:
    QPoint startPoint;
    QPoint endPoint;
    QImage image;
    bool pressed;

    explicit my_label(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

signals:
   void draw_rectangle();

public:
    Ui::MainWindow *ui;

};

#endif // MY_LABEL_H
