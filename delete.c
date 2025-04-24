#include<stdio.h>
int main()
{
    int a[100],size,i,delete,j;
    printf("\nEnter the size:-");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter the element of a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);
    }
    printf("\nEnter the elemen which want to delete:-");
    scanf("%d",&delete);
    for ( i = 0; i < size; i++)
    {
        if(a[i]==delete)
        {
            for ( j = i; j < size-1;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    printf("\nAfter delete element from array");
    for ( i = 0; i < size-1; i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);
    }
   return 0;
}
