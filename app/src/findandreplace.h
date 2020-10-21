#pragma once

#include <QDialog>
#include <QTextEdit>

#include <iostream>
#include <string>
#include <regex>

namespace Ui {
  class FindAndReplace;
}

class FindAndReplace : public QDialog
{
  Q_OBJECT

public:
  explicit FindAndReplace(QWidget *parent = nullptr);
  ~FindAndReplace();
  void setText(QTextEdit *text_edit);

  void find(QTextEdit *find);

  void clear_text_format();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

protected:
	void done(int r);

private:
  Ui::FindAndReplace *ui;
  QTextEdit *m_text_edit;
};