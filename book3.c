// <!-- Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information. -->
#include<stdio.h>
#include<string.h>
   struct book3
   {
        int price;
        char title;
        char author;
   };
   
int main()
{
    int i;
    struct book3 b[3];
    for ( i = 0; i < 3; i++)
    {
        printf("\nEnter the title book");
        scanf("%s",&b[i].title);
        printf("\nEnter the author name:");
        scanf("%s",&b[i].author);
        printf("Enter the price");
        scanf("%d",&b[i].price);
    } 
    printf("\nTITLE\tAUTHOR\tPRICE");
    for ( i = 0; i < 3; i++)
    {
        printf("%s%s%d",b[i].title,b[i].author,b[i].price);
    }
    return 0;
    
}