#include<stdio.h>
int main()
{
    int i,size,a[100],b[100];
    printf("Enter the Size:-");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the Element a[%d]",i);
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<size;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    //2array scan and Diplay
    for(i=0;i<size;i++)
    {
        printf("\nEnter the Element b[%d]",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\nb[%d]=%d",i,b[i]);
    }
    printf("\nAddition of two array\n");
    for(i=0;i<size;i++)
    {
        printf("\nsum[%d]=%d",i,a[i]+b[i]);
    }
    return 0;
}