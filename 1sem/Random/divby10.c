#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("%d is exactly divisible by 10.",n);
    }
    else
    {
        printf("%d is not exactly divisible by 10.",n);
    }
}