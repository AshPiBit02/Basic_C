// To find the factorail of a number that is given by the user.............
#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
}
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}