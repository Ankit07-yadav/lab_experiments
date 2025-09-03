/* 4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/

#include<stdio.h>
int main()
{
    int cyear , tyear , nyear , lyear , ndays , ldays , tdays , dindex , dmod ;
    printf("Enter current year \n");
    scanf("%d",&cyear);
    tyear=cyear-1;
    lyear=(tyear/4)-(tyear/100)+(tyear/400);
    nyear=tyear-lyear;
    ldays=lyear*366;
    ndays=nyear*365;
    tdays=ndays+ldays;
    dmod=tdays%7;
    dindex=(1+dmod)%7;
    switch (dindex)
    {
    case 1:
        printf("MONDAY");
        break;

        case 2:
        printf("TUESDAY");
        break;

        case 3:
        printf("WEDNESDAY");
        break;

        case 4:
        printf("THRUSDAY");
        break;

        case 5:
        printf("FRIDAY");
        break;

        case 6:
        printf("SATURDAY");
        break;

        case 7:
        printf("SUNDAY");
        break;
    
    default:
        break;
    }
}