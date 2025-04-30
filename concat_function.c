#include<stdio.h>
int main()
{
        char str1[100],str2[100],i,j;
        printf("\nEnter the string:-");
        gets(str1);
        printf("\nEnter the string:");
        gets(str2);
        i=0;
        while (str1[i]!='\0')
        {
            i++;
        }
        while (str2[j]!='\0')
        {
            str1[i]=str2[j];
            i++;
            j++;
        }
        str1[i]='\0';
        printf("concate two string %s",str1);
        return 0;
}