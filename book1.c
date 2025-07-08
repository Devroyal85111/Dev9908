#include<stdio.h>
#include<string.h>
struct book1
{
    char Title[100];
    char author[100];
    int price;
};
int main()
{
    int i;
    struct book1 b[3];
    for ( i = 0; i < 3; i++)
    {
        printf("\nEnter the Title:-");
        gets(b[i].Title);
        printf("\nEnter the Author name:-");
        getchar();
        gets(b[i].author);
        printf("\nEnter the Price:-");
        scanf("%d",&b[i].price);
        getchar();
    }
    printf("\nTITLE\tAUTHOR\tPRICE");
    for ( i = 0; i < 3; i++)
    {
        printf("\n%s\t%s\t%d",b[i].Title,b[i].author,b[i].price);
    }
   return 0; 
     
}