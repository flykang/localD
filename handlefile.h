#ifndef HANDLEFILE_H
#define HANDLEFILE_H
#include <QFile>
#include <iostream>
#include <QStringList>
#include <QDebug>

class handleFile
{
public:
    handleFile();
    void findFunction(std::string words);

private:
    QStringList functionName;
    QFile file;
};

#endif // HANDLEFILE_H
