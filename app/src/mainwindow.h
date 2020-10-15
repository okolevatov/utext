#pragma once

#include <QMainWindow>
#include <QMenuBar>
#include <QFileDialog>
#include <QTextStream>
#include <QDir>
#include <QFileSystemModel>
#include <QApplication>
#include <QMessageBox>
#include <QWidget>
#include <QTreeWidget>
#include <QPushButton>
#include <QStringList>
#include <QModelIndex>
#include <QDebug>

#include <iostream>

#include "main_lib.h"

namespace Ui {
  class MainWindow;
}

// class FileDialog : public QFileDialog
// {
//     Q_OBJECT
//     public:
//         explicit FileDialog(QWidget *parent);
//         QStringList selected() const;
//     public slots:
//         void openClicked();
//     private:
//         QTreeView *treeView;
//         QPushButton *openButton;
//         QStringList selectedFilePaths;
// };


class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots: // all actions 
  void on_actionOpen_Folder_triggered(); 

  void on_actionOpen_File_triggered();

  void on_actionHard_Mode_triggered();

  void on_actionSave_triggered();

  void on_actionSave_as_triggered();
  
  void on_actionHealth_Care_Mode_triggered();
  
  void on_actionNormal_Mode_triggered();
  
private:
  Ui::MainWindow *ui;
  QString m_path_file;
  QFileSystemModel *m_model;
};
