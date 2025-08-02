#include<stdio.h>
int x;
void check(int);
void main()
{
printf("Enter any number:");
scanf("%d",&x);
check(x);
}
void check(int x)
{
    if(x>0)
    {
        printf("%d is even number.",x);
    }
    else if(x<0)
    {
        printf("%d is odd number.",x);
    }
    else
    {
        printf("It is zero.");
    }
}