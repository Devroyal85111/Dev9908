#include<stdio.h>
int main()
{
    int i,size,a[100];
    printf("Enter the size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
      printf("Enter the element a[%d]",i);
      scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("\n%d is Negetive",a[i]);
        }
    }
    return 0;
}