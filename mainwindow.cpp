#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_searchEdit_cursorPositionChanged()
{
    //when the word changed do search again
     //std::cout << ui->searchEdit->text().toStdString();
  //   searchString = ui->searchEdit->text().toStdString();


     boost::regex re("^select ([a-zA-Z]*) from ([a-zA-Z]*)");
     Poppler::Document* document = Poppler::Document::load("/home/zk/c-api.pdf");
     if (!document || document->isLocked()) {
       delete document;
       return;
     }

     QRectF *recf = new QRectF();

     int page = 0;
     while(page < document->numPages()){
         QString text = document->page(page)->text(*recf);
         ui->textBrowser->append(text);
         page++;

     }


     //ui->textBrowser->verticalScrollBar(0);
     QTextCursor cursor = ui->textBrowser->textCursor();
     cursor.setPosition(8000);
     ui->textBrowser->setTextCursor(cursor);

    // curso.setPosition(100,QTextCursor::KeepAnchor);
     //curso.movePosition(QTextCursor::End);
    // ui->textBrowser->setTextCursor(curso);
    // setFocus();
    // QString text = document->page(20)->text(*recf);
     //ui->textBrowser->append(text);

     //QFile file("/home/ubunut/test/c-api.pdf");
  /*   if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
         qDebug() << "can't open the file" << endl;
     }

     while(!file.atEnd()){
         QByteArray line = file.readLine();
         QString str(line);


         boost::cmatch what;
         if(boost::regex_search(str.toStdString(),re)){
             std::cout << "finds";
         }
         else
          {
            std::cout<<"Error Input"<<std::endl;
          }
         ui->textBrowser->append(str);
     }*/
}

void MainWindow::initilize(){

}
