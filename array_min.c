#include<stdio.h>
int main()
{
    int a[700],i,size,min;
    printf("Enter the Element array of Size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the Element of a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
            printf("\na[%d]=%d",i,a[i]);
    }
    min=a[0];
    for(i=0;i<size;i++)
    {
            if(a[i]<min)
            {
                a[i]=min;
            }
    }
    printf("The minum is %d",min);
    return 0;
}
