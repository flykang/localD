#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QLineEdit>
#include "searcher.h"
#include "handlefile.h"

class MylineEdit : public QLineEdit
{
public:
    MylineEdit();
    void findFunction(std::string words);
private:
    std::string words;
};

#endif // MYLINEEDIT_H
