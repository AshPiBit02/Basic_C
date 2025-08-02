// Write a C program to input a number and check whether it is exactly divisible by 5 but not by 7
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%5==0 && n%7!=0)
    {
            printf("%d is exactly divisible by 5 but not by 7.");
    }
    else if(n%5==0 && n%7==0)
    {
        printf("%d is exactly divisible by both 5 and 7.");
    }
    else
    {
        printf("%d is not divible by 5 or 7.");
    }
}