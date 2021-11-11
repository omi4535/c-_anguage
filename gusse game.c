#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int no1,no2,ngusse2=1,ngusse1=1,gusse1,gusse2;

    srand(time(0));
    no1=rand()%100+1;
    no2=rand()%100+1;
    // printf("%d\n",no1);
    // printf("%d",no2);
    printf("\t\t1st players turn\n");
    do
    {
        printf("\n enter your gusse\n");
        scanf("%d",&gusse1);
        if(gusse1<no1)
        {
            printf("higher no plz\n");
        }
        else if(gusse1>no1)
        {
            printf("lower no plz");
        }
        else
        {
            printf("\n\n you gusse in %d chance\n\n",ngusse1);
        }
        ngusse1++;
    }
    while(gusse1!=no1);


    printf("\n\n\t\t2nd players turn");
    do
    {
        printf("\nenter your gusse\n");
        scanf("%d",&gusse2);
        if(gusse2<no2)
        {
            printf("higher no plz");
        }
        else if(gusse2>no2)
        {
            printf("lower no plz");
        }
        else
        {
            printf("\n\n you gusse in %d",ngusse2);
        }
        ngusse2++;
    }
    while(gusse2!=no2);

    if(ngusse1<ngusse2)
    {
        printf("\n\n\n\t\t congro first player is winner");
    }
    else if(ngusse2<ngusse1)
    {
        printf("\n\n\n\t\tcongro second player is winner");
    }
    return 0;
}
