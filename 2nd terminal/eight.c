#include<stdio.h>
void check();
void main()
{
    check();
}
void check()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is even number.",x);
    }
    else
    {
        printf("%d is odd number.",x);
    }
}