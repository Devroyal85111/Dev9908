#include<stdio.h>
int main()
{
        char name[100];
        int temp;
        printf("Enter your name:-");
        gets(name);
        printf("%s",name);
        temp=strlen(name);
        printf("The length of string is %d",temp);
        return 0;
}