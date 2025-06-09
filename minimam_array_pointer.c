#include<stdio.h>
int main()
{
    int arr[100],i,*ptr1,size,min,*ptr2;
    printf("Enter the size");
    scanf("%d",&size);
    ptr1=arr;
    ptr2=&min;
    for ( i = 0; i < size; i++)
    {
        printf("Enter the Element arr[%d]",i);
        scanf("%d",(ptr1+i));
    }
    for ( i = 0; i < size; i++)
    {
        printf("\narr[%d]=%d",i,*(ptr1+i));
    }
    *ptr2=arr[0];
    for ( i = 0; i < size; i++)
    {   
        if(*(ptr1+i)<*ptr2)
        {
            *ptr2=arr[i];
            // printf("\n%d is minimum ",min);
        }
    }
    printf("\n%d is minimum ",*ptr2);
     return 0;  
}