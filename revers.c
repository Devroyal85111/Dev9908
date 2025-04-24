#include<stdio.h>
int main()
{
    int i,size,a[100];
    printf("Enter the Element size:-");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter the Element a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("\nrevers\n");
    for(i=size-1;i>=0;i--)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}