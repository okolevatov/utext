#pragma once

#include <QDialog>
#include <iostream>

namespace Ui {
  class FindAndReplace;
}

class FindAndReplace : public QDialog
{
  Q_OBJECT

public:
  explicit FindAndReplace(QWidget *parent = nullptr);
  ~FindAndReplace();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

protected:
	void done(int r);

private:
  Ui::FindAndReplace *ui;
  std::string m_text;
};
//closeEvent(), done()QDialog::Rejected.