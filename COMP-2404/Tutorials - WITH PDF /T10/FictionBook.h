#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "Book.h"

class FictionBook : public Book{
    public:
        FictionBook(int, string, string, string, int);
        bool operator<(Book*);
        ~FictionBook();
};
#endif
