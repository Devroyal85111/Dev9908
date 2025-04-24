#include<stdio.h>
int main()
{
    int a[300],size,i,b[300];
    printf("Enter the size of array");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter the Element a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("\ncopy array");
    for ( i = 0; i < size; i++)
    {
            b[i]=a[i];
    }
    for ( i = 0; i < size; i++)
    {
        printf("\nb[%d]=%d",i,b[i]);
    }
    
    
    
}