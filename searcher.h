#ifndef SEARCHER_H
#define SEARCHER_H
#include <iostream>


class searcher
{
public:
    searcher(std::string words);
    void searchFunction(std::string words);
private:
    std::string words;
};

#endif // SEARCHER_H
