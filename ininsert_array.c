#include<stdio.h>
int main()
{
    int a[100],size,i,newele;
    
    printf("Enter the size of array");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter the Element a[%d]",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("Enter the new element for insert in array:-");
    scanf("%d",&newele);
   
    a[size]=newele;
    printf("\nInsertion in Array:\n");
    for ( i = 0; i < size+1; i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);
    }
   return 0; 
}