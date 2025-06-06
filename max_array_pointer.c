#include<stdio.h>
int main()
{
    int arr[100],i,size,max,*ptr1;
    printf("Enter the Size:-");
    scanf("%d",&size);
    ptr1=&arr;
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
        if (arr[i]>max)
        {
            max=arr[i];
        } 
    }
    printf("\n%d is max",max);
    return 0;
}