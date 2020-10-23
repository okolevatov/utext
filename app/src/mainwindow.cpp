#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow), 
    TextEdit(new CodeEditor(parent)),
    m_model(new QFileSystemModel(this)),
    m_edits(new QAction("Edit"))
{
    ui->setupUi(this);
    ui->menuBar->setNativeMenuBar(false);

    QObject::connect(m_edits, SIGNAL(triggered()), this, SLOT(edit()));
    ui->menuBar->addAction(m_edits);

    ui->horizontalLayout_3->addWidget(TextEdit);
    
    ui->treeView->setModel(m_model);
    ui->treeView->setHeaderHidden(true);
    ui->treeView->setSelectionBehavior (QAbstractItemView::SelectRows);
    for (int i = 1; i < m_model->columnCount(); i++)
        ui->treeView->hideColumn(i);
    ui->actionUndo->setIcon(QIcon("./app/resources/back-arrow.svg"));
    ui->actionRedo->setIcon(QIcon("./app/resources/redo-arrow.svg"));
    ui->actionCut->setIcon(QIcon("./app/resources/scissors.svg"));
    ui->actionCopy->setIcon(QIcon("./app/resources/copy.svg"));
    ui->actionPaste->setIcon(QIcon("./app/resources/paste.svg"));
    ui->toolBar->hide();
    QObject::connect(ui->treeView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(elementClicked(QModelIndex)));
}

void MainWindow::edit() {
    if (!ui->toolBar->isVisible())
        ui->toolBar->show();
    else
        ui->toolBar->hide();
}

void MainWindow::elementClicked(const QModelIndex& current) {
    QModelIndex p = current;
    std::vector<QString> vec;
    QString tmp_path;

    while(p.isValid()) {
        vec.push_back(p.data().toString());
        p = p.parent();
    }
    std::reverse(vec.begin(), vec.end());
    for (const auto& i : vec) {
        if (i.toStdString() != "/")
            tmp_path += "/" + i;
    }
    QFile file(tmp_path);
    if (file.open(QFile::ReadOnly | QFile::Text)) {
        QTextStream in(&file);
        TextEdit->setPlainText(in.readAll());
    }
}

MainWindow::~MainWindow()
{
    delete m_model;
    delete m_edits;
    delete TextEdit;
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
        QFileInfo fileInfo(filename);
        m_path_dir = fileInfo.dir().absolutePath();

        m_model->setRootPath(m_path_dir); 
        ui->treeView->setRootIndex(m_model->index(m_path_dir));

        QTextStream in(&file);
        QString text = in.readAll();
        TextEdit->setPlainText(text);
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
    TextEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    TextEdit->redo();
}

void MainWindow::on_actionCopy_triggered()
{
    TextEdit->copy();
}

void MainWindow::on_actionCut_triggered()
{
    TextEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    TextEdit->paste();
}

void MainWindow::on_actionFind_and_replace_triggered()
{
    m_sec_win.setText(TextEdit);
    m_sec_win.show();
}
