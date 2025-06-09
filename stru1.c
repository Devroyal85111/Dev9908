#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[100];

};
int main()
{
    struct student s1,s2;
    s1.roll_no=1;
    strcpy(s1.name,"DEV");
    s2.roll_no=2;
    strcpy(s2.name,"PRACHI DIDI");

    printf("\nRollNo\tName");
    printf("\n%d\t%s",s1.roll_no,s1.name);
    printf("\n%d\t%s",s2.roll_no,s2.name);
}