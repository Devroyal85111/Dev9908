#include<stdio.h>
#include<string.h>
struct student_array
{
    int id;
    char name[100];
};
int main()
{
    int i;
    char temp[100]; 
    struct student_array s[5];
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter the student id:-");
        scanf("%d",&s[i].id);
        printf("\nEnter the student name:-");
        scanf("%s",&temp);
        strcpy(s[i].name,temp);
    }
    printf("\nStudent Id\tstudent Name:");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d\t\t%s",s[i].id,s[i].name);
    }
    return 0;
}