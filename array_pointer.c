#include<stdio.h>
int main()
{
    int Size,i,arr[100],*ptr1;
    ptr1=&Size;
    printf("Enter the Size:-");
    scanf("%d",&Size);
    ptr1=arr;
    for(i=0;i<Size;i++)
    {
        printf("\nEnter the Element array arr[%d]",i);
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < Size; i++)
    {
        printf("\narr[%d]=%d",i,*(ptr1+i));
    }
   return 0; 
}