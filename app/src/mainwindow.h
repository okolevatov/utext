#pragma once

#include <QMainWindow>
#include <QMenuBar>
#include <QFileDialog>
#include <QTextStream>
#include <QDir>
#include <QApplication>
#include <QMessageBox>
#include "main_lib.h"

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

  void on_actionHard_Mode_triggered();

  void on_actionSave_triggered();
  
  void on_actionTheme_triggered();
  
  void on_actionHealth_Care_Mode_triggered();
  
  void on_actionNormal_Mode_triggered();
  
private:
  Ui::MainWindow *ui;
};