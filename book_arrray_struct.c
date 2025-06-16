#include<stdio.h>
#include<string.h>
struct book_arrray_struct
{
    int id;
    char name[100];
    int price;
    char author[100];
};
int main()
{
    int i;
    char temp[100];
    struct book_arrray_struct b[5];
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter the book id:-");
        scanf("%d",&b[i]);
        printf("\nEnter the book name:-");
        scanf("%s",&temp);
        strcpy(b[i].name,temp);
        printf("\nAuthor name:-");
        scanf("%s",&temp);
        strcpy(b[i].author,temp);
    }
    printf("\nBook ID \t Book Name \t Book price \t Author name");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d\t\t%s\t%d\t%s",b[i].id,b[i].name,b[i].price,b[i].author);
    }
    

    
    
     
    
    
    
}