#include<stdio.h>
void main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive integer.",n);
    }
    else if(n<0)
    {
        printf("%d is negative integer.",n);
    }
    else
    {
        printf("Input is zero.");
    }
}