// WAP to define a function named fact(int n) to calculate factorail of an input number.
// using recursive function.
#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("Enter a number to calculate factorial:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}
int fact(int n)
{
    int f=1;
    while(n>1)
    {
        f*=n;
        n--;
    }
    return f;
}