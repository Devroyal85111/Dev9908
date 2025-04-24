#include<stdio.h>
int main()
{
        int i,j,a[400],temp,size;
        printf("Enter the Size :-");
        scanf("%d",&size);
        for ( i = 0; i < size; i++)
        {
            printf("Enter the Element a[%d]",i);
            scanf("%d",&a[i]);
        }
        for ( i = 0; i < size; i++)
        {
            printf("\na[%d]=%d",i,a[i]);
        }
        for ( i = 0; i < size; i++)
        {
            for ( j = 0; j < size-1-i; j++)
            {
                if (a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                
            }
            
        }
        printf("\ndescending\n");

        for ( i = size-1; i >= 0; i--)
        {
            printf("\na[%d]=%d",i,a[i]);
        }
               
        
        
}