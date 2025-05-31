#include<stdio.h>
int main()
{
    int arr[100],i,size,sum=0,*ptr1,*ptrsum;
    printf("Enter the Size:-");
    scanf("%d",&size);
    ptr1=&arr;
    ptrsum=&sum;
    for ( i = 0; i < size; i++)
    {
        printf("\nEnter the Element arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i,*(ptr1+i));
    }
    for ( i = 0; i < size; i++)
    {
        *ptrsum=*ptrsum+arr[i];
    }
    
    printf("\nThe sum is %d",*ptrsum);
    return 0;
}