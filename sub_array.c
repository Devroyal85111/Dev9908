#include<stdio.h>
int main()
{
    int  i,size,a[100],b[100];
    printf("Enter the size:-");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter the Element of a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
     //2array scan and Diplay
     for(i=0;i<size;i++)
     {
        printf("\nEnter the Element of b[%d]",i);
        scanf("%d",b[i]);
     }
     for(i=0;i<size;i++)
     {
        printf("\nb[%d]=%d",i,b[i]);
     }
     printf("\nsubtration of two array ");
     for(i=0;i<size;i++)
     {
        printf("\nsub[%d]=%d",i,a[i]-b[i]);
     }
    return 0;
}