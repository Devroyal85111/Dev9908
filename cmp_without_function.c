#include<stdio.h>
int main()
{
    char str1[100],str2[100],i=0;
    int flag=0;
    printf("Enter the String 1:-");
    gets(str1);
    printf("Enter the string 2:-");
    gets(str2);
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if (str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("Both string are same");
    }
    else 
    {
        printf("String are not same");
    }
    return 0;
}