#include<stdio.h>
int main()
{
        char name[100],copy[100];
        printf("Enter the string");
        gets(name);
        printf("string is:%s",name);
        strcpy(copy,name);
        printf("\nCopy array :%s",name);
        return 0;
}