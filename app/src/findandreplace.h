#pragma once

#include <QDialog>
#include <QTextEdit>
#include <QPlainTextEdit>

#include <iostream>
#include <string>
#include <regex>

namespace Ui {
  class FindAndReplace;
}

class FindAndReplace : public QDialog {
  Q_OBJECT

public:
  explicit FindAndReplace(QWidget *parent = nullptr);
  ~FindAndReplace();
  void setText(QPlainTextEdit *text_edit);

  void find(QString find_text);

  void find_and_replace(QTextEdit *find, QString replace_text);

  void clear_text_format();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_registerBox_clicked();

  //void on_syntaxBox_clicked();

protected:
	void done(int r);

private:
  Ui::FindAndReplace *ui;
  QPlainTextEdit *m_text_edit;
  bool m_reg;
  //bool m_syntax;
};
