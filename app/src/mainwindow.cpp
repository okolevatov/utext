#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_model(new QFileSystemModel(this))
{
    ui->setupUi(this);
    ui->menuBar->setNativeMenuBar(false);
    
    ui->treeView->setModel(m_model);
    ui->treeView->setHeaderHidden(true);
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);
    ui->treeView->hideColumn(4);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_Folder_triggered()
{
  QFileDialog dialog(this);
  dialog.setDirectory(QDir::homePath()); 
  dialog.setFileMode(QFileDialog::Directory);
  QString dirname = dialog.getExistingDirectory();

  if (dirname.isEmpty())
    return ;

  m_path_dir = dirname;
  m_path_file.clear();

  m_model->setRootPath(dirname); 
  ui->treeView->setRootIndex(m_model->index(dirname));
}

void MainWindow::on_actionOpen_File_triggered() {
  QFileDialog dialog(this);
  dialog.setDirectory(QDir::homePath()); 
  dialog.setFileMode(QFileDialog::Directory);
  QString filename = dialog.getOpenFileName();

  QFile file(filename);

  if (file.open(QFile::ReadOnly | QFile::Text)) {
    m_path_file = filename;
    m_path_dir.clear();

    QTextStream in(&file);
    QString text = in.readAll();
    ui->TextEdit->setPlainText(text);
  }
  
}

void MainWindow::on_actionSave_triggered()
{
    std::cout << "Saved\n";
}

void MainWindow::on_actionSave_as_triggered()
{
    std::cout << "Saved as\n";
}

void MainWindow::on_actionHard_Mode_triggered()
{
    std::cout << "HardMode\n";
}

void MainWindow::on_actionHealth_Care_Mode_triggered()
{
    std::cout << "HealthCareMode\n";
}

void MainWindow::on_actionNormal_Mode_triggered()
{
    std::cout << "NormalMode\n";
}

// void MainWindow::resizeEvent(QResizeEvent *event)
// {
//     if(event)
//     {
//         std::cout << "Old size : Y = " << event->oldSize().height() << " X = " << event->oldSize().width();
//         std::cout << "\nNew size : Y = " << event->size().height() << " X = " << event->size().width();
//     }
// }

void MainWindow::on_actionUndo_triggered()
{
    ui->TextEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->TextEdit->redo();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->TextEdit->copy();
}

void MainWindow::on_actionCut_triggered()
{
    ui->TextEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->TextEdit->paste();
}

void MainWindow::on_actionFind_and_replace_triggered()
{
    m_sec_win.show();
}