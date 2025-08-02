#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d is the factorial of the number.",fact(n));
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