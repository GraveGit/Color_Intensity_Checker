#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //void show_rectangle();

public slots:
    void show_rectangle();
    void on_btn_choose_clicked();
    void on_pushButton_clicked();

public:
    Ui::MainWindow *ui;
    QImage original;
};

#endif // MAINWINDOW_H
