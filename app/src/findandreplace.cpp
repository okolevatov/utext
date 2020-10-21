#include "findandreplace.h"
#include "ui_findandreplace.h"

FindAndReplace::FindAndReplace(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::FindAndReplace)
{
  ui->setupUi(this);
  setWindowTitle("Find & Replace");
}

FindAndReplace::~FindAndReplace()
{
  delete ui;
}

//find
void FindAndReplace::find(QTextEdit *find) {
    QString find_text = find->toPlainText();

    std::string finding = find->toPlainText().toStdString();

    std::string str = m_text_edit->toPlainText().toStdString();

    QTextCursor cursor = m_text_edit->textCursor();

    int pos = str.find(finding);

    for(auto& s : str)
        s = tolower(s);
    for(auto& s : finding)
        s = tolower(s);
    while (pos != -1) {
        cursor.setPosition(pos);
        cursor.setPosition(pos + finding.length(),QTextCursor::KeepAnchor);
        QTextCharFormat charFormat = cursor.charFormat();
        charFormat.setBackground(QColor(70, 163, 241));
        charFormat.setForeground(QColor(243, 160, 160));
        cursor.setCharFormat(charFormat);
        pos = str.find(finding, pos + 1);
    }
}


void FindAndReplace::clear_text_format() {
    QTextCursor cursor = m_text_edit->textCursor();
    cursor.setPosition(0);
    cursor.setPosition(m_text_edit->toPlainText().toStdString().length(),QTextCursor::KeepAnchor);
    QTextCharFormat charFormat = cursor.charFormat();
    charFormat.setBackground(QColor(255, 255, 255));
    charFormat.setForeground(QColor(0, 0, 0));
    cursor.setCharFormat(charFormat);
}

void FindAndReplace::on_pushButton_clicked()
{
    clear_text_format();
    find(ui->textEdit);
}

//replace on
void FindAndReplace::on_pushButton_2_clicked()
{
    clear_text_format();
    find(ui->textEdit_2);
    QString replace_text = ui->textEdit_3->toPlainText();
    std::cout << " need to replace on " << replace_text.toStdString() << "\n";
}

void FindAndReplace::done(int r) {
    clear_text_format();
    if(r == 0) {
        ui->textEdit->setPlainText("");
        ui->textEdit_2->setPlainText("");
        hide();
    }
}
void FindAndReplace::setText(QTextEdit *text_edit) {
    m_text_edit = text_edit;
}