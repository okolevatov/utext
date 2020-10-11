#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->menuBar->setNativeMenuBar(false);
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
  path_file = filename;
  QTextStream in(&file);
  QString text = in.readAll();
  ui->TextEdit->setPlainText(text);
  ui->TextEdit->setDocumentTitle("Lesha");
}

void MainWindow::on_actionSave_triggered()
{
    std::cout << "Saved\n";
}

// void MainWindow::on_actionTheme_triggered()
// {
//     std::cout << "Theme\n";
// }

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
