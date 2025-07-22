#include<stdio.h>
#include<string.h>
struct employee
{
   int ID;
   char name[100]; 
   int salary;
};
int main()
{
    int i;
    int max;
    int min;
    struct employee em[5];
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter the Name of ID:-");
        scanf("%ld",&em[i].ID);
        printf("\nEnter the Your Name:-");
        scanf("%s",&em[i].name);
        printf("\nEnter the  salary:-");
        scanf("%ld",&em[i].salary);
    }
    printf("\nID\tNAME\t\tSALARY");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d\t%s\t\t%ld",em[i].ID,em[i].name,em[i].salary);
    }
    max=em[0].salary;
    
    for(i=0;i<5;i++)
    {
        if(em[i].salary>max)
        {
            max=em[i].salary;
        }
    }
    min=em[0].salary;
    for ( i = 0; i < 5; i++)
    {
         if(em[i].salary<min)
        {
            min=em[i].salary;
        }
    }
    printf("\nThe maximum salary is %d",max);
    printf("\nThe minimum salary is %d",min);
    
    return 0;
}