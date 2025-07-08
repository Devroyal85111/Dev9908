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
    for ( i = 0; i < 5; i++)
    {
        em[i].salary=max;
        if(em[i].salary>max)
        {
            printf("\nIt is %d",max);
        }
    }
    
    return 0;
}