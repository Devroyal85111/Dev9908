#include<stdio.h>
#include<string.h>
struct book
{
   int book_price;
   char book_Name[100]; 
};
int main()
{
    struct book b1,b2;
    b1.book_price=200;
    strcpy(b1.book_Name,"Math");
    b2.book_price=600;
    strcpy(b2.book_Name,"English");
    printf("\nbook\tName");
    printf("\n%d\t%s",b1.book_price,b1.book_Name); 
     printf("\n%d\t%s",b2.book_price,b2.book_Name); 
}