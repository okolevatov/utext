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
void FindAndReplace::on_pushButton_clicked()
{
	QString find_text = ui->textEdit->toPlainText();
	std::cout << find_text.toStdString() << " need to find\n";
}

//replace on
void FindAndReplace::on_pushButton_2_clicked()
{
	QString find_text = ui->textEdit_2->toPlainText();
	QString replace_text = ui->textEdit_3->toPlainText();
	std::cout << find_text.toStdString() << " need to replace on " << replace_text.toStdString() << "\n";
	
}

void FindAndReplace::done(int r) {
	if(r == 0) {
		ui->textEdit->setPlainText("");
		ui->textEdit_2->setPlainText("");
		hide();
	}
}