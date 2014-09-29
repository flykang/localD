#include "handlefile.h"

handleFile::handleFile()
{

}

void handleFile::findFunction(std::string words){
    handleFile *hf = new handleFile();
    QFile file("~/home/test/c-api.pdf");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug()<<"Can't open the file!"<<endl;
    }
    while(!file.atEnd()) {
            QByteArray line = file.readLine();
            QString str(line);
            qDebug()<< str;
    }
}
