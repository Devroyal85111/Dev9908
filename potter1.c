#include<stdio.h>
int main()
{
    int num,*ptr;
    ptr=&num;
    printf("Enter the num1");
    scanf("%d",&num);
    printf("\nThe Num is %d",num);
    printf("\nThe Num is adress of %p",ptr);
    printf("\nThe Num is value of %d",*ptr);
    return 0;
}