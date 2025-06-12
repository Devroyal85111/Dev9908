#include<stdio.h>
#include<string.h>
struct car
{
    int id,price;
    char name[100];
};
int main()
{
    struct car c1,c2,c3,c4,c5;
    c1.id=101;
    strcpy(c1.name,"Creta") ;
    c1.price=120000;
    c2.id=102;
    strcpy(c2.name,"neno");
    c2.price=40000;
    c3.id=103;
    strcpy(c3.name,"Jeep");
    c3.price=2499;
    c4.id=104;
    strcpy(c4.name,"BMW");
    c4.price=66573;
    c5.id=105;
    strcpy(c5.name,"Audi");
    c5.price=6000000;
    printf("\nCar ID\tCar Name Car Price\n");
    printf("\n%d\t%s\t%d",c1.id,c1.name,c1.price);
    printf("\n%d\t%s\t%d",c2.id,c2.name,c2.price);
    printf("\n%d\t%s\t%d",c3.id,c3.name,c3.price);
    printf("\n%d\t%s\t%d",c4.id,c4.name,c4.price);
    printf("\n%d\t%s\t%d",c5.id,c5.name,c5.price);

    
}
