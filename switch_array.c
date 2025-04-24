#include<stdio.h>
int a[100],size,i ,newvalue,searching,flag=0,size2,merging[100],j,b[100],temp,delete;
int main()
{
    int choice;
    printf("\nEnter the size of array:-");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the Element of array a[%d]:-", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("\na[%d]=%d", i, a[i]);
    }
    printf("\n1)--Insertion");
    printf("\n2)--Searching");
    printf("\n3)--Merging");
    printf("\n4)--sorting");
    printf("\n5)--Deletion");
    printf("\nEnter your choice :-");
    scanf("%d", &choice);
    switch (choice)
{
        case 1:
    {
            printf("\nEnter the New value");
            scanf("%d",&newvalue);

            a[size]=newvalue;
            for ( i = 0; i < size+1; i++)
            {
                printf("\na[%d]=%d",i,a[i]);
            }
            break;
    }//case 1
            case 2:
            {
                printf("\nEnter the Element which you want serching");
                scanf("%d",&searching);
               
                for ( i = 0; i < size; i++)
                {
                    if(a[i]==searching)
                    {
                        printf("\n%d on %d index",a[i],i);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    printf("\n%d is not available in array",searching);
                }
                break;
            }//case 2
        case 3:
        {
            printf("\nEnter the size2 of array");
            scanf("%d",&size2);

            for ( i = 0; i < size2; i++)
            {
                printf("\nEnter the Element of a[%d]",i);
                scanf("%d",&b[i]);
            }
            for ( i = 0; i < size2; i++)
            {
                printf("\nb[%d]=%d",i,b[i]);
            }
            for ( i = 0; i < size; i++)
            {
                merging[i]=a[i];
            }
            for ( j = 0; j < size2; j++)
            {
                merging[i+j]=b[j];
            }
            printf("\nMerging two array :\n");
            for ( i = 0; i < size+size2; i++)
            {
                printf("\nmerging[%d]=%d",i,merging[i]);
            }
            break;
        }
        case 4:
        {
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
            for ( i = 0; i < size; i++)
            {
                printf("\na[%d]=%d",i,a[i]);
            }
            break;
        }
        case 5:
        {
            printf("Enter the element which you want to delete:-");
            scanf("%d",&delete);

            for ( i = 0; i < size; i++)
            {
                if (a[i]==delete)
                {
                    for ( j = i; j < size-1; j++)
                    {
                        a[j]=a[j+1];
                    }
                    
                }
                
            }
            for ( i = 0; i < size-1; i++)
            {
                printf("a[%d]=%d",i,a[i]);
            }
            
        }
        break;
    default:
    {
        printf("Invaild choice:");
        break;
    }
}
    return 0;
}