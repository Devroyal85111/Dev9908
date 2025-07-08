#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int userscore=0,compscore=0;
void checkOption(int usr,int comp)
{
    if(usr==comp)
    {
        printf("--------------------------------------------\n");
        printf("| It's a tie \n");
        printf("");
    }
    else if(usr==1)
    {
        if(comp==2)
        {
            printf("----------------------------------------\n");
            printf("| You win!:) |\n");
            printf("| You :Scissor:) |\n");
            printf("| Computer : Paper) |\n");
            printf("-----------------------------------------\n");
            userscore++;  
        }
        else
        {
            printf("------------------------------------------\n");
            printf("| You Lose!:(   |\n");
            printf("| You :Scissor   |\n");
            printf("| Computer:Rock) |\n");
            printf("-------------------------------------------\n");
            compscore++;
        }
    }
    else if(usr==2)
    {
        if(comp==1)
        {
            printf("--------------------------------------------\n");
            printf("|   You lose!:(     |\n");
            printf("|   You : Paper     |\n");
            printf("|   Computer :Scissor) |\n");
            printf("----------------------------------------------\n");
            compscore++;
        }
        else{
            printf("---------------------------------------------\n");
            printf("|   You Win!:)     |\n");
            printf("|   You : Paper     |\n");
            printf("|   Computer :Rock) |\n");
            printf("----------------------------------------------\n");
            userscore++;
         }
    }  
    else if(usr==3)
    {
        if(comp==1)
        {
           printf("---------------------------------------------\n");
            printf("|   You Win!:)     |\n");
            printf("|   You : Rock     |\n");
            printf("|   Computer :Scissor) |\n");
            printf("----------------------------------------------\n");
            userscore++;  
        }
        else{
          printf("--------------------------------------------\n");
            printf("|   You lose!:(     |\n");
            printf("|   You : Rock     |\n");
            printf("|   Computer :Scissor) |\n");
            printf("----------------------------------------------\n");
            compscore++;   
        }
    }
    else if(usr==4)
    {
        printf("-----------------------------------------------\n");
        if(userscore>compscore)
        printf("|   You Won |:) |\n");
        else if(userscore<compscore)
        printf("| You Lose  |:( |\n");
        else
        printf("| It's Tie !  |\n");
        printf("| Final score |\n");        
        printf("| You : %d |\n",userscore);        
        printf("| Computer :%d |\n",compscore);        
        printf("----------------------------------------------\n");        
        printf("\n");        
    }
    else
    {
        Beep(750,500);
        printf("\nInvalid number");
    }
}
void main()
{
    int userchoice,compchoice;
    srand(time(0));
    while(userchoice!=4)
    {
        printf("Welcom to Rock,Paper & Scissor Game");
        printf("Please select the Option");
        printf("\n1) Scissor");
        printf("\n2) Paper");
        printf("\n3)Rock");
        printf("\n4) Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&userchoice);
        compchoice=(rand()%3)+1;
        checkOption(userchoice,compchoice);
    }
}
