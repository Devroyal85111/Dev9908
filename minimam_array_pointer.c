#include<stdio.h>
int main()
{
    int arr[100],i,*ptr1,size,min;
    printf("Enter the size");
    scanf("%d",&size);
    ptr1=arr;
    for ( i = 0; i < size; i++)
    {
        printf("Enter the Element arr[%d]",i);
        scanf("%d",(ptr1+i));
    }
    for ( i = 0; i < size; i++)
    {
        printf("\narr[%d]=%d",i,*(ptr1+i));
    }
    min=arr[0];
    for ( i = 0; i < size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            // printf("\n%d is minimum ",min);
        }
    }
    printf("\n%d is minimum ",min);
     return 0;  
}