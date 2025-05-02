#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int temp;
    printf("Enter the string1:-");
    gets(str1);
    printf("Enter the string2:-");
    gets(str2);
    temp=strcmp(str1,str2);
    printf("Temp = %d",temp);
    if(temp==0)
    {
        printf("Both string are same");
    }
    else
    {
        printf("Both string are not same");
    }
    return 0;  
}