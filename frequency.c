#include<stdio.h>
int main()
{
    int a[200],size,i,count=0,fre;
    printf("Enter the size of array:-");
    scanf("%d",&size); 
    for(i=0;i<size;i++)
    {
        printf("Enter the Element a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("Enter the element to know it's frequency:-");
    scanf("%d",&fre);
    for ( i = 0; i < size; i++)
    {
        if (a[i]==fre)
        {
            count++;
        }
    }
    printf("%d Freque is %d",fre,count);
    return 0;
}