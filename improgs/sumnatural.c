// Write a program to calculate sum of n natural number.
#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("Enter number of natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum+=i;
    }
    printf("%d is the sum of %d natural numbers.",sum,n);


}