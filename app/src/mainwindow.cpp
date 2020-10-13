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

void MainWindow::on_actionOpen_triggered()
{
  QFileDialog dialog(this);
  dialog.setDirectory(QDir::homePath()); 
  dialog.setFileMode(QFileDialog::Directory);
  QString filename = dialog.getOpenFileName();
  QFile file(filename);
  if (!file.open(QFile::ReadOnly | QFile::Text))
    QMessageBox::warning(this, "alarm", "file not open");

  m_model->setRootPath(QDir::currentPath()); //QDir::homePath()

  m_path_file = filename;

  QTextStream in(&file);
  QString text = in.readAll();
  ui->TextEdit->setPlainText(text);
  ui->TextEdit->setDocumentTitle("Lesha");
}

void MainWindow::on_actionSave_triggered()
{
    std::cout << "Saved\n";
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
