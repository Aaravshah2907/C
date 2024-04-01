#include "books_catalog.h"
#include "book_def.h"

int count = 0;

BOOK booksCatalog[MAX_SIZE];

void addBookToCatalog(BOOK book1)
{
    // implement this function as per specification in books_catalog.h
    booksCatalog[count] = book1;
    count++;
    return;
    
}

void printBookCatalog()
{
    // implement this function as per specification in books_catalog.h
    for (int i = 0; i < count; ++i)
    {
        printBook(booksCatalog[i]);
    }
    return;
}

void sortBookCatalogOnID()
{
    // implement this function as per specification in books_catalog.h
    int sort = 1;
    for (int i = 0; i < count && sort; ++i)
    {
        for (int j = 0; j < count - i; ++j)
        {
            sort = 0;
            if (booksCatalog[j].ID < booksCatalog[j-1].ID)
            {
                sort = 1;
                BOOK temp = booksCatalog[j];
                booksCatalog[j] = booksCatalog[j-1];
                booksCatalog[j-1] = temp;
            }
        }
    }
    return;
}