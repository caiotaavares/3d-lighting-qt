#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_illumination(new Illumination())
{
    ui->setupUi(this);
    setupUI();

    // Initial image
    m_currentImage = m_illumination->noIlu();
    ui->frame->setPixmap(QPixmap::fromImage(m_currentImage));

    // Connect illuminate button
    connect(ui->illuminateButton, &QPushButton::clicked,
            this, &MainWindow::on_illuminateButton_clicked);
}

void MainWindow::setupUI() {
    // Ambient and Light Constants
    ui->iaDoubleSpinBox->setRange(0, 1000);
    ui->iaDoubleSpinBox->setValue(0.8);
    ui->kaDoubleSpinBox->setRange(0, 1000);
    ui->kaDoubleSpinBox->setValue(0.5);
    ui->ilDoubleSpinBox->setRange(0, 1000);
    ui->ilDoubleSpinBox->setValue(0.8);

    // Diffuse Coefficients
    ui->kdSphereDoubleSpinBox->setRange(0, 1000);
    ui->kdSphereDoubleSpinBox->setValue(0.3);
    ui->kdPlaneDoubleSpinBox->setRange(0, 1000);
    ui->kdPlaneDoubleSpinBox->setValue(0.7);

    // Specular Coefficients
    ui->ksSphereDoubleSpinBox->setRange(0, 1000);
    ui->ksSphereDoubleSpinBox->setValue(0.8);
    ui->ksPlaneDoubleSpinBox->setRange(0, 1000);
    ui->ksPlaneDoubleSpinBox->setValue(0.4);

    // Specular Constants
    ui->kDoubleSpinBox->setRange(0, 1000);
    ui->kDoubleSpinBox->setValue(2);
    ui->nDoubleSpinBox->setRange(0, 1000);
    ui->nDoubleSpinBox->setValue(2);

    // Set default radio button
    ui->adRadioButton->setChecked(true);
}

void MainWindow::on_illuminateButton_clicked() {
    if (ui->adRadioButton->isChecked()) {
        m_currentImage = m_illumination->iluA(
            ui->iaDoubleSpinBox->value(),
            ui->kaDoubleSpinBox->value(),
            ui->ilDoubleSpinBox->value(),
            ui->kdSphereDoubleSpinBox->value(),
            ui->kdPlaneDoubleSpinBox->value()
            );
    } else if (ui->adsRadioButton->isChecked()) {
        m_currentImage = m_illumination->iluB(
            ui->iaDoubleSpinBox->value(),
            ui->kaDoubleSpinBox->value(),
            ui->ilDoubleSpinBox->value(),
            ui->kDoubleSpinBox->value(),
            ui->nDoubleSpinBox->value(),
            ui->kdSphereDoubleSpinBox->value(),
            ui->kdPlaneDoubleSpinBox->value(),
            ui->ksSphereDoubleSpinBox->value(),
            ui->ksPlaneDoubleSpinBox->value()
            );
    }

    ui->frame->setPixmap(QPixmap::fromImage(m_currentImage));
}

MainWindow::~MainWindow() {
    delete ui;
    delete m_illumination;
}
