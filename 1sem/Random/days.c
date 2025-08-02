// WAP to enter number of days and convert it into years, months and days.
#include <stdio.h>
void main()
{
    int days,years,months;
    printf("Enter number of days:");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("YY:MM:DD::%d:%d:%d",years,months,days);
}