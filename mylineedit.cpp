#include "mylineedit.h"

MylineEdit::MylineEdit()
{
    words = this->text().toStdString().c_str();
}

void MylineEdit::findFunction(std::string words){
    QFile file("~/test/test.txt");
    handleFile *hf = new handleFile();

    while(!file.atEnd()) {
            QByteArray line = file.readLine();
            QString str(line);
         //   qDebug()<< str;
    }

}
