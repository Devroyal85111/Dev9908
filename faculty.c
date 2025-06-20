#include<stdio.h>
#include<string.h>
struct faculty
{
    int ID;
    char name[100];
    int salary;
    int exp;
};
int main()
{
    int i;
    struct faculty f[100];
    for ( i = 0; i < 5; i++)
    {
       printf("\nEnter the ID:-");
       scanf("%d",&f[i].ID);
       printf("\nEnter the NAME:-");
       getchar();
       gets(f[i].name);
       printf("\nEnter the salary:-");
       scanf("%d",&f[i].salary);
       printf("\nEnter the Exp:-");
       scanf("%d",&f[i].exp);
    }  
    printf("\nID\tNAME\tSALARY\tEXP");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d\t%s\t%d\t%d",f[i].ID,f[i].name,f[i].salary,f[i].exp);
    }
    return 0;
}