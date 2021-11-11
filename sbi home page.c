#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cost
{
    int id;
    int pin;
    char *name[50];
    char *branch[90];
    int bal;
    int rem;
} c1,c2;
void wid(int a);
void add(int a);
void funct(int b);
void main()

{
    printf("\t\t\t\t welcome to State Bank of India");
    c1.id=123;
    c1.pin=4535;
    strcpy(c1.name,"omkar");
    strcpy(c1.branch,"rahuri");
    c1.bal=23434;

    c2.id=122;
    c1.pin=4536;
    strcpy(c2.name,"mayur");
    strcpy(c2.branch,"a.nagar");
    c2.bal=1234;

    int i,p;
    printf("\n\nenter a id :-");
    scanf("%d",&i);
    printf("enter a pin :-");
    scanf("%d",&p);

    if(i==123 && p==4535)
    {
        printf("welcome   %s",c1.name);
        printf("\t\tbranch name :- %s",c1.branch);
        printf("\n____________________________________________________________________________________________________");
        funct(c1.bal);
    }
    else if(i==122 && p==4536)
    {
        printf("welcome   %s",c2.name);
        printf("\tbranch name :- %s",c1.branch);
        printf("\n____________________________________________________________________________________________________");
        funct(c2.bal);

    }
    else
    {
        printf("enter a vaild id or cheak your pin");
        printf("\n\n\t\t\t\tthanks for banking with us");
    }
    printf("\n____________________________________________________________________________________________________");

    getch();
}
void wid(int a)
{
    int w,am;
    printf("\n\tpress one to widraw 100 $");
    printf("\n\tpress 2 to widraw 200 $");
    printf("\n\tpress 0 to widraw other amount");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
        printf("your ramianing balance is %d",(a-100));
        break;
    case 2:
        printf("your raminig balance is %d",(a-200));
        break;
    case 0:
        printf("enter a amount you want to widraw");
        scanf("%d",&am);
        if(a<am)
        {
            printf("\t\t\tyou dont have suffisuent balance");
        }
        else if(a>am)
        {
            printf("\t\t\tyour remaining blaance is %d",a-am);
        }
        else
            printf("\t\t\tyou cann't widraw whole balance");

    }
    printf("\n____________________________________________________________________________________________________");

    printf("\n\n\t\t\t\tthanks for banking with us");
}
void add(int a)
{
    int w,am;
    printf("\n\tpress one to add 100 $");
    printf("\n\tpress 2 to add 200 $");
    printf("\n\tpress 0 to add other amount");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
        printf("\t\t\tyour balance now  is %d",(a+100));
        break;
    case 2:
        printf("\t\t\tyour balance  is now %d",(a+200));
        break;
    case 0:
        printf("\t\t\tenter a amount you want to add");
        scanf("%d",&am);
        printf("\t\t\tyour balance is now %d",(a+am));

    }
    printf("\n____________________________________________________________________________________________________");

    printf("\n\n\t\t\t\tthanks for banking with us");
}
void funct(int b)
{
    int a;
    printf("\n\tpress  1 to widraw ammount");
    printf("\n\tpress  2 to add amount to balance");
    printf("\n\tpress 0 to exit");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("\n____________________________________________________________________________________________________");

        wid(b);
        break;
    case 2:
        printf("\n____________________________________________________________________________________________________");

        add(b);
        break;
    case 0:
        printf("\n____________________________________________________________________________________________________");

        printf("\n\n\t\t\t\t thanks for banking with us");
    }
}
