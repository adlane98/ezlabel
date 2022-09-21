#ifndef EZLABEL_MAINWINDOW_H
#define EZLABEL_MAINWINDOW_H


#include <QHBoxLayout>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    QWidget* mainWidget;
    QVBoxLayout* mainLayout;

    QHBoxLayout* header;
    QHBoxLayout* footer;

    QLabel* pathLabel;
    QLabel* nameLabel;

    QLabel* image;

    QPushButton* button1;
    QPushButton* button2;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
};


#endif //EZLABEL_MAINWINDOW_H
