#include<stdio.h>
int main()
{
   long int i,a[100],size,search;
   printf("Enter the Size:-");
   scanf("%ld",&size);
   for(i=0;i<size;i++)
   {
        printf("Enter the Element a[%ld]",i);
        scanf("%ld",&a[i]);
   }
   for ( i = 0; i < size; i++)
   {
        printf("\na[%d]=%d",i,a[i]);
   }
   printf("Enter the number are searching");
   scanf("%d",&search);
   for ( i = 0; i < size; i++)
   {
        if (a[i]==search)
        {
            printf("\na[%d]=%d",i,a[i]);
        }
    }
   return 0;
}