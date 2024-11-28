/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *adRadioButton;
    QCheckBox *adsRadioButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *iaDoubleSpinBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *kaDoubleSpinBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *ilDoubleSpinBox;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *kdSphereDoubleSpinBox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *kdPlaneDoubleSpinBox;
    QLabel *label_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *kDoubleSpinBox;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *nDoubleSpinBox;
    QLabel *label_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *ksSphereDoubleSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *ksPlaneDoubleSpinBox;
    QLabel *label_7;
    QPushButton *illuminateButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(983, 632);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QLabel(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 80, 401, 351));
        frame->setFrameShape(QFrame::Shape::Box);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(510, 20, 470, 563));
        verticalLayout_10 = new QVBoxLayout(widget);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        adRadioButton = new QCheckBox(widget);
        adRadioButton->setObjectName("adRadioButton");

        horizontalLayout_12->addWidget(adRadioButton);

        adsRadioButton = new QCheckBox(widget);
        adsRadioButton->setObjectName("adsRadioButton");

        horizontalLayout_12->addWidget(adsRadioButton);


        verticalLayout_10->addLayout(horizontalLayout_12);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        iaDoubleSpinBox = new QDoubleSpinBox(groupBox);
        iaDoubleSpinBox->setObjectName("iaDoubleSpinBox");

        horizontalLayout->addWidget(iaDoubleSpinBox);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        kaDoubleSpinBox = new QDoubleSpinBox(groupBox);
        kaDoubleSpinBox->setObjectName("kaDoubleSpinBox");

        horizontalLayout_2->addWidget(kaDoubleSpinBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ilDoubleSpinBox = new QDoubleSpinBox(groupBox);
        ilDoubleSpinBox->setObjectName("ilDoubleSpinBox");

        horizontalLayout_3->addWidget(ilDoubleSpinBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout);


        verticalLayout_10->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        kdSphereDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        kdSphereDoubleSpinBox->setObjectName("kdSphereDoubleSpinBox");

        horizontalLayout_4->addWidget(kdSphereDoubleSpinBox);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        kdPlaneDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        kdPlaneDoubleSpinBox->setObjectName("kdPlaneDoubleSpinBox");

        horizontalLayout_5->addWidget(kdPlaneDoubleSpinBox);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_10->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        kDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        kDoubleSpinBox->setObjectName("kDoubleSpinBox");

        horizontalLayout_8->addWidget(kDoubleSpinBox);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        nDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        nDoubleSpinBox->setObjectName("nDoubleSpinBox");

        horizontalLayout_9->addWidget(nDoubleSpinBox);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");

        horizontalLayout_9->addWidget(label_9);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_10->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        ksSphereDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        ksSphereDoubleSpinBox->setObjectName("ksSphereDoubleSpinBox");

        horizontalLayout_6->addWidget(ksSphereDoubleSpinBox);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        ksPlaneDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        ksPlaneDoubleSpinBox->setObjectName("ksPlaneDoubleSpinBox");

        horizontalLayout_7->addWidget(ksPlaneDoubleSpinBox);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_3);


        verticalLayout_10->addWidget(groupBox_3);

        illuminateButton = new QPushButton(widget);
        illuminateButton->setObjectName("illuminateButton");

        verticalLayout_10->addWidget(illuminateButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 983, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        frame->setText(QString());
        adRadioButton->setText(QCoreApplication::translate("MainWindow", "Modo Ambiente + Difusa", nullptr));
        adsRadioButton->setText(QCoreApplication::translate("MainWindow", "Modo Ambiente + Difusa + Especular", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Geral", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Intensidade da Luz Ambiente", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Coeficiente de Reflex\303\243o Ambiente", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Intensidade da Luz Principal", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Coeficientes Difusos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Coeficiente Difuso da Esfera", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Coeficiente Difuso do Plano", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Constantes Especulares", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Constante de Ajuste de Dist\303\242ncia", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Expoente de Brilho Especular", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Coeficientes Especulares", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Coeficiente Especular da Esfera", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Coeficiente Especular do Plano", nullptr));
        illuminateButton->setText(QCoreApplication::translate("MainWindow", "Aplicar Ilumina\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
