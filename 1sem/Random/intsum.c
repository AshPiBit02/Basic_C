// WAP to enter n-digit integer and display sum of each digit.
#include<stdio.h>
void main()
{
    int num,sum=0,remainder;
    printf("Enter the n-digit integer:");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        sum+=remainder;
        num=num/10;
    }
    printf("The sum of the digits is %d",sum);
}