#include<stdio.h>
int main()
{
    FILE *fptr;
    int count=0;
    char name[100];
    char ch;
    fptr = fopen("countdigit.txt","w");
    printf("\nEnter your name:-");
    gets(name);

    if(fptr==NULL)
    {
        printf("FILE NOT CREATE");
    }
    else{
        fprintf(fptr,name);
        fclose(fptr);
    }
    //file created done
    fptr = fopen("countdigit.txt","r");
    if (fptr==NULL)
    {
        printf("File can't open");
    }
    else{
        while ((ch =fgetc(fptr))!=EOF)
        {
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
        
    }
 printf("\nThere are  %d character in file ",count);
 fprintf(fptr,"There are  %d character in file ",count);   
    return 0;
}