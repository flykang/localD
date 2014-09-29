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
     QFile file("/home/ubunut/test/hello");
     if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
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
     }
}

void MainWindow::initilize(){

}
