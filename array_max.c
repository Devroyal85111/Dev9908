#include<stdio.h>
int main()
{
    int a[100],i,size,max;
    printf("\nEnter the value of Size:-");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter the Element of a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
                max=a[i];
        }

    }
    printf("The maximum number is %d",max);
    return 0;
}