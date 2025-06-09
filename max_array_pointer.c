#include<stdio.h>
int main()
{
    int arr[100],i,size,max,*ptr1,*ptr2;
    printf("Enter the Size:-");
    scanf("%d",&size);
    ptr1=&arr;
    ptr2=&max;
    for ( i = 0; i < size; i++)
    {
        printf("Enter the Element arr[%d]",i);
        scanf("%d",(ptr1+i));
    }
    for ( i = 0; i < size; i++)
    {
        printf("\narr[%d]=%d",i,*(ptr1+i));
    }
    max=arr[0];
    for ( i = 0; i < size; i++)
    {
        if (*(ptr2)>max)
        {
            *ptr2=arr[i];
        } 
    }
    printf("\n%d is max",*ptr2);
    return 0;
}