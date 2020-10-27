#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::on_actionNew_file_triggered() {
    new_file();
}

void MainWindow::new_file() {
    QFileDialog dialog(0);
    dialog.setWindowModality(Qt::WindowModal);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    
    if (dialog.exec() == QDialog::Accepted) {
        TextEdit->setEnabled(true);
        QFile file(dialog.selectedFiles().first());
        file.open(QIODevice::WriteOnly);
        m_path_file = file.fileName();

        QFileInfo fileInfo(m_path_file);
        m_path_dir = fileInfo.dir().absolutePath();
    }
}