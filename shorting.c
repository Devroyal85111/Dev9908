#include<stdio.h>
int main()
{
    int size,a[100],i,j,temp;
    printf("\nEnter the size of array:-");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter the element a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    //shorting array
    printf("\nshorting array\n");
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}