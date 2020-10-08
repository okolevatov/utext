#pragma once

#include <QMainWindow>
#include <QApplication>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_actionOpen_triggered();

private:
  Ui::MainWindow *ui;
};
