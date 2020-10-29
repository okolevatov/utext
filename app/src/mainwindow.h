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
#include <QResizeEvent>
#include <QDebug>
#include <QFileInfo>
#include <QPlainTextEdit>
#include <QPalette>
#include <QLabel>

#include <iostream>
#include <string>
#include <algorithm>

#include "main_lib.h"
#include "findandreplace.h"
#include "codeeditor.h"
#include "highlighter.h"

class CodeEditor;
class Highlighter;

namespace Ui {
    class MainWindow;
}

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

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionFind_and_replace_triggered();

    void elementClicked(const QModelIndex& current);

    void new_file();

    void on_actionNew_file_triggered();

    void edit();

    void keyPressEvent(QKeyEvent *e);

    void showCursorPos();

//protected:
//     void resizeEvent(QResizeEvent* event);

private:
    Ui::MainWindow *ui;
    CodeEditor *TextEdit;
    FindAndReplace m_sec_win;
    QString m_path_file;
    QString m_path_dir;
    QFileSystemModel *m_model;
    QAction *m_edits;
    Highlighter *m_highlighter;
};
