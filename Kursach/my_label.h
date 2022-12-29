#ifndef MY_LABEL_H
#define MY_LABEL_H
#include <QLabel>
#include <QMouseEvent>
#include <QPoint>
#include <mainwindow.h>

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


    explicit my_label(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

};

#endif // MY_LABEL_H
