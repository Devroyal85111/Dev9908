#include<stdio.h>
#include<string.h>
struct employee
{
    int id,salary;
    char name[100]; 
};

int main()
{
    struct employee em1,em2,em3,em4;
    em1.id=1;
    strcpy(em1.name,"Rahul");
    em1.salary=7000;
    em2.id=2;
    strcpy(em2.name,"Rohan");
    em2.salary=10000;
    em3.id=3;
    strcpy(em3.name,"pinky");
    em3.salary=3000;
    em4.id=4;
    strcpy(em4.name,"raju");
    em4.salary=8000;

    printf("\nid\tname\tsalary");
    printf("\n%d\t%s\t%d",em1.id,em1.name,em1.salary);
    printf("\n%d\t%s\t%d",em2.id,em2.name,em2.salary);
    printf("\n%d\t%s\t%d",em3.id,em3.name,em3.salary);
    printf("\n%d\t%s\t%d",em4.id,em4.name,em4.salary);
    
}