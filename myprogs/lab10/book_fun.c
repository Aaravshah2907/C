#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
   struct book b ;
   b.ID = ID;
   b.shelfNum =  shelfNum;
   b.price = price;
   return b;
}

void printBook(BOOK book1)
{
   printf("ID: %d\n", book1.ID);
   printf("Shelf Number: %d\n", book1.shelfNum);
   printf("Price: %f\n", book1.price);
   return;
}