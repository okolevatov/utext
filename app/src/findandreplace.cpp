#include "findandreplace.h"
#include "ui_findandreplace.h"

FindAndReplace::FindAndReplace(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::FindAndReplace),
  m_reg(false)//, m_syntax(false)
{
  ui->setupUi(this);
  setFocus();
  setWindowTitle("Find & Replace");
}

FindAndReplace::~FindAndReplace()
{
  delete ui;
}

//find
void FindAndReplace::find(QString find_text) {
    std::string finding = find_text.toStdString();

    std::string str = m_text_edit->toPlainText().toStdString();

    QTextCursor cursor = m_text_edit->textCursor();

    if (!m_reg) {
        for(auto& s : str)
            s = tolower(s);
        for(auto& s : finding)
            s = tolower(s);
    }
    //if (!m_syntax) {
        int pos = str.find(finding);

        while (pos != -1) {
            cursor.setPosition(pos);
            cursor.setPosition(pos + finding.length(),QTextCursor::KeepAnchor);
            QTextCharFormat charFormat = cursor.charFormat();
            charFormat.setBackground(QColor(70, 163, 241));
            charFormat.setForeground(QColor(255, 255, 255));
            cursor.setCharFormat(charFormat);
            pos = str.find(finding, pos + 1);
        }
    //}
    // else {
    //     std::smatch m;
    //     //std::string reg = "(\\b"+ finding +"\\b)";
    //     std::regex e ("(\\b"+ finding +"\\b)");

    //     while (std::regex_search (str, m, e)) {
    //         cursor.setPosition(m.position());
    //         cursor.setPosition(m.position() + finding.length(),QTextCursor::KeepAnchor);
    //         QTextCharFormat charFormat = cursor.charFormat();
    //         charFormat.setBackground(QColor(70, 163, 241));
    //         charFormat.setForeground(QColor(243, 160, 160));
    //         cursor.setCharFormat(charFormat);
    //         str = m.suffix().str();
    //     }
    // }
}

//find_and_replace
void FindAndReplace::find_and_replace(QTextEdit *find, QString replace_text) {
    QString find_text = find->toPlainText();

    QString str = m_text_edit->toPlainText();

    QTextCursor cursor = m_text_edit->textCursor();

    if (!str.isEmpty() && !find_text.isEmpty() && !replace_text.isEmpty()) {
        int pos = str.toStdString().find(find_text.toStdString());
        
        if (!m_reg) {
            str = str.toLower();
            find_text = find_text.toLower();
        }
        while (pos != -1) {
            cursor.setPosition(pos);
            str.replace(pos, find_text.length(), replace_text);
            pos = str.toStdString().find(find_text.toStdString(), pos + 1);
        }
        m_text_edit->setPlainText(str);
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
    find(ui->textEdit->toPlainText());
}

//replace on
void FindAndReplace::on_pushButton_2_clicked()
{
    QString replace_text = ui->textEdit_3->toPlainText();

    clear_text_format();
    find(ui->textEdit_2->toPlainText());
    find_and_replace(ui->textEdit_2, replace_text);
    find(replace_text);
}

void FindAndReplace::done(int r) {
    clear_text_format();
    if(r == 0) {
        ui->textEdit->setPlainText("");
        ui->textEdit_2->setPlainText("");
        ui->textEdit_3->setPlainText("");
        hide();
    }
}
void FindAndReplace::setText(QPlainTextEdit *text_edit) {
    m_text_edit = text_edit;
}

void FindAndReplace::on_registerBox_clicked()
{
    if (!m_reg)
        m_reg = true;
    else
        m_reg = false;
}

// void FindAndReplace::on_syntaxBox_clicked()
// {
//     if (!m_syntax)
//         m_syntax = true;
//     else
//         m_syntax = false;
// }
