#include<stdio.h>
int main()
{
    int a[100],b[100],i,size1,size2,merger[100],j;

    printf("Enter the size for first array:-");
    scanf("%d",&size1);

    for ( i = 0; i < size1; i++)
    {
        printf("Enter the Element a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size1; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    //2nd 
    printf("Enter the size for second array:-");
    scanf("%d",&size2);

    for ( i = 0; i < size2; i++)
    {
        printf("Enter the Element b[%d]",i);
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < size2; i++)
    {
        printf("\nb[%d]=%d",i,b[i]);
    }
    printf("\nMerger array\n");
    for(i=0;i<size1;i++)
    {
        merger[i]=a[i];
    }
    for(j=0;j<size2;j++)
    {
        merger[i+j]=b[j];
    }   
    for(i=0;i<size1+size2;i++)
    {
        printf("\nmerger[%d]=%d",i+1,merger[i]);
    }
    return 0;
}