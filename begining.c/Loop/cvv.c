//To calculate the total pocket money of ____ days
#include<stdio.h>
void main ()
{
    int a,money=0,sav=0,expense;
    printf("Enter the number of days for pocketmoney: ");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
    money=money+50;
    sav=sav+15;
    }
    expense=money-sav;
    printf("The total pocket money is Rs.%d. ",money);
    printf("for %d days\n",a);
    printf("%d is saving from total pocket money.\n",sav);
    printf("%d is the expense. ",expense);



}