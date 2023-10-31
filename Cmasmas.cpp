#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Crea un widget central y un layout vertical
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // Crea un botón para imprimir "Hola Mundo"
    QPushButton *printButton = new QPushButton("Imprime Hola Mundo", centralWidget);
    connect(printButton, &QPushButton::clicked, []() {
        std::cout << "Hola Mundo" << std::endl;
    });

    // Crea un botón para cerrar la ventana
    QPushButton *closeButton = new QPushButton("Close", centralWidget);
    connect(closeButton, &QPushButton::clicked, this, &MainWindow::close);

    // Añade los botones al layout
    layout->addWidget(printButton);
    layout->addWidget(closeButton);

    // Establece el widget central
    setCentralWidget(centralWidget);
    setWindowTitle("Hola Mundo");
}

MainWindow::~MainWindow()
{
}
