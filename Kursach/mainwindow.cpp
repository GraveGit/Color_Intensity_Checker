#include "mainwindow.h"
#include "qpainter.h"
#include "ui_mainwindow.h"
#include <algorithm>
#include "cmath"
#include <QColor>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Отрисовка прямоугольника
void MainWindow::show_rectangle()
{
    QImage tmp(ui->label_img->pixmap()->toImage());

    QPainter painter(&tmp);
    QPen paintpen(Qt::red);
    paintpen.setWidth(1);
    painter.setPen(paintpen);
    painter.drawRect(ui->label_img->startPoint.x(), ui->label_img->startPoint.y(),
                     ui->label_img->endPoint.x() - ui->label_img->startPoint.x()  , ui->label_img->endPoint.y() - ui->label_img->startPoint.y());

    ui->label_img->setPixmap(QPixmap::fromImage(tmp));

}

//Выбор картинки
void MainWindow::on_btn_choose_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images(*.png *.jpg *jpeg *bmp)"));
    if(QString::compare(file_name, QString()) != 0)
    {
        bool valid = ui->label_img->image.load(file_name);
        if(valid)
        {
            ui->label_img->setPixmap(QPixmap::fromImage( ui->label_img->image.scaled(ui->label_img->size())));
        }
    } else
    {
        QMessageBox::critical(this, "Внимание", "Произошла ошибка при загрузке изображения!");
    }
}




void MainWindow::on_pushButton_clicked()
{

    show_rectangle();
    int col_min = 256;
    int col_max = -1;
    int col_midl = 0;
    int cnt = 0;

    int x_satrtPoint = ui->label_img->startPoint.x();
    int y_satrtPoint = ui->label_img->startPoint.y();
    int x_endPoint = ui->label_img->endPoint.x();
    int y_endPoint = ui->label_img->endPoint.y();

    QImage image(ui->label_img->pixmap() -> toImage());

    if (x_endPoint > x_satrtPoint && y_endPoint > y_satrtPoint)
    {
        for (int i = x_satrtPoint + 1; i < x_endPoint - 1; i++ )
        {
            for (int j = y_satrtPoint + 1; j < y_endPoint - 1; j++)
            {
                col_min = std::min(col_min, qGray(image.pixelColor(i, j).rgba()));
                col_max = std::max(col_max, qGray(image.pixelColor(i, j).rgba()));
                col_midl += qGray(image.pixelColor(i, j).rgba());
                cnt++;
            }
        }
    }
    else if (x_endPoint > x_satrtPoint && y_endPoint < y_satrtPoint)
    {
        for (int i = x_satrtPoint + 1; i < x_endPoint - 1; i++ )
        {
            for (int j = y_satrtPoint - 1; j > y_endPoint + 1; j--)
            {
                col_min = std::min(col_min, qGray(image.pixelColor(i, j).rgba()));
                col_max = std::max(col_max, qGray(image.pixelColor(i, j).rgba()));
                col_midl += qGray(image.pixelColor(i, j).rgba());
                cnt++;
            }
        }

    }
    else if (x_endPoint < x_satrtPoint && y_endPoint > y_satrtPoint)
    {
        for (int i = x_satrtPoint - 1; i > x_endPoint + 1; i-- )
        {
            for (int j = y_satrtPoint + 1; j < y_endPoint - 1; j++)
            {
                col_min = std::min(col_min, qGray(image.pixelColor(i, j).rgba()));
                col_max = std::max(col_max, qGray(image.pixelColor(i, j).rgba()));
                col_midl += qGray(image.pixelColor(i, j).rgba());
                cnt++;
            }
        }
    }
    else if (x_endPoint < x_satrtPoint && y_endPoint < y_satrtPoint)
    {
        for (int i = x_satrtPoint - 1; i > x_endPoint + 1; i-- )
        {
            for (int j = y_satrtPoint - 1; j > y_endPoint + 1; j--)
            {
                col_min = std::min(col_min, qGray(image.pixelColor(i, j).rgba()));
                col_max = std::max(col_max, qGray(image.pixelColor(i, j).rgba()));
                col_midl += qGray(image.pixelColor(i, j).rgba());
                cnt++;
            }
        }
    }

    col_midl /= cnt;

    ui->label_min->setText(QString::number(col_min));
    ui->label_max->setText(QString::number(col_max));
    ui->label_midl->setText(QString::number(col_midl));
}

