#include<stdio.h>
int main()
{
    int num1,num2,*ptr1,*ptr2,add,sub,mul,div;
    ptr1=&num1;
    ptr2=&num2;
    printf("\nEnter the num");
    scanf("%d",&num1);
    printf("\nEnter the num");
    scanf("%d",&num2);
    add=*ptr1 + *ptr2;
    sub=*ptr1 - *ptr2;
    mul=*ptr1 * *ptr2;
    div=*ptr1 /  *ptr2;
    printf("\nThe Num is %d",num1);
    printf("\nThe Num is %d",num2);
    printf("\nThe Num is adress of %p",ptr1);
    printf("\nThe Num is adress of %p",ptr2);
    printf("\nThe Num is value of %d",*ptr1);
    printf("\nThe Num is value of %d",*ptr2);
    printf("\nThe add of %d",add);
    printf("\nThe sub of %d",sub);
    printf("\nThe mul of %d",mul);
    printf("\nThe div of %d",div);

}