#include <QFile>
#include <QImage>
#include <QPixmap>
#include <QImageReader>
#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) {
    setWindowTitle("EZLabel");

    mainWidget = new QWidget(this);
    mainLayout = new QVBoxLayout(mainWidget);

    mainWidget->setLayout(mainLayout);

    header = new QHBoxLayout();
    footer = new QHBoxLayout();

    pathLabel = new QLabel("chemin", mainWidget);
    pathLabel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    pathLabel->setFrameStyle(QFrame::Box | QFrame::Plain);
    pathLabel->setLineWidth(2);

    nameLabel = new QLabel("nom de l'image", mainWidget);
    nameLabel->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
    nameLabel->setAlignment(Qt::AlignCenter);
    nameLabel->setFrameStyle(QFrame::Box | QFrame::Plain);
    nameLabel->setLineWidth(2);

    image = new QLabel("image", mainWidget);

    QImage imgIn = QImage((uchar*) img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
    QPixmap pixmap(R"(D:\other-projects\ezlabel\chat.png)");

    image->setPixmap(pixmap);
    image->setAlignment(Qt::AlignCenter);
    image->setFrameStyle(QFrame::Box | QFrame::Plain);
    image->setLineWidth(2);

    button1 = new QPushButton("Button 1", mainWidget);
    button2 = new QPushButton("Button 2", mainWidget);

    header->addWidget(pathLabel);
    header->addWidget(nameLabel);

    footer->addWidget(button1);
    footer->addWidget(button2);

    mainLayout->addLayout(header);
    mainLayout->addWidget(image);
    mainLayout->addLayout(footer);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow() = default;
