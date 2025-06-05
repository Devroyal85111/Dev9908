#include<stdio.h>
int main()
{
    int size,i,arr[100],*ptr;
    ptr=arr;
    printf("Enter the Element array of Size");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter the Element a[%d]",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("\narr[%d]=%d",i,*(ptr+i));
    }
    printf("\nNegetive Element are\n");
    for ( i = 0; i < size; i++)
    {
        if(arr[i]<0)
        {
            printf("\narr[%d]=%d",i,*(ptr+i));
        }
    }
    return 0;
    
}