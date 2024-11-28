#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "illumination.h"
#include "zbuffer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_illuminateButton_clicked();

private:
    Ui::MainWindow *ui;
    Illumination *m_illumination;
    QImage m_currentImage;

    void setupUI();
};
#endif // MAINWINDOW_H
