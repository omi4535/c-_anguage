#include<stdio.h>
int main()
{
    int d,m,no,r;
    printf("enter a date");
    scanf("%d",&d);
    printf("enter a month");
    scanf("%d",&m);
    printf("%d-%d-2021\n",d,m);
    printf("________________________________________________\n");
    switch(m)
    {
    case 1:
        no=d;
        if (d>31)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday \n\n");
            break;
        case 1:
            printf(" its friday \n\n");
            break;
        case 2:
            printf(" its saturday \n\n");
            break;
        case 3:
            printf(" its sunday \n\n");
            break;
        case 4:
            printf(" its monday\n\n");
            break;
        case 5:
            printf(" its thuesday \n\n");
            break;
        case 6:
            printf(" its wednesday \n\n");
            break;
        }
        break;
    case 2:
        no=31+d;
        if (d>28)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 3:
        no=31+28+d;
        if (d>28)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 4:
        no=31+28+31+d;
        if (d>30)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 5:
        no=31+28+31+30+d;
        if (d>31)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 6:
        no=31+28+31+30+31+d;
        if (d>30)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 7:
        no=31+28+31+30+31+30+d;
        if (d>31)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 8:
        no=31+28+31+30+31+30+31+d;
        if (d>31)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 9:
        no=31+28+31+30+31+30+31+31+d;
        if (d>30)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;

        }
        break;
    case 10:
        no=31+28+31+30+31+30+31+30+31+d;
        if (d>31)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;
        }
        break;
    case 11:
        no=31+28+31+30+31+30+31+30+31+30+d;
        if (d>30)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;

        }
        break;
    case 12:
        no=31+28+31+30+31+30+31+30+31+30+d;
        if (d>31)
            printf("enter a vaild date");
        else
            r=no%7;
        switch(r)
        {
        case 0:
            printf(" its thursday\n");
            break;
        case 1:
            printf(" its friday\n");
            break;
        case 2:
            printf(" its saturday\n");
            break;
        case 3:
            printf(" its sunday\n");
            break;
        case 4:
            printf(" its monday\n");
            break;
        case 5:
            printf(" its thuesday\n");
            break;
        case 6:
            printf(" its wednesday\n");
            break;


        }
        break;
    default :
        printf("enter a valid month");

    }
    printf("________________________________________________");
    return 0;
}
