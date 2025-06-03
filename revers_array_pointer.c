#include<stdio.h>
int main()
{
    int i,num,arr[100],size,j,*ptr1;
    ptr1=arr;
    printf("\nEnter the Size:-");
    scanf("%d",&size);

   for(i=0;i<size;i++)
   {
        printf("\nEnter the Element arr[%d]",i);
        scanf("%d",(ptr1+i));
   }
   for ( i = 0; i < size; i++)
   {
        printf("\narr[%d]=%d",i,*(ptr1+i));
   }
   printf("\nRevers Array");
   for ( j=size-1,i = 0;j>=0, i < size;j--,i++)
   {
        printf("\narr[%d]=%d",i,*(ptr1+i));
   }
    return 0;
    
}