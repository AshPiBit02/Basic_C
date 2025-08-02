#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The sum is %d",sum(n));
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n<0)
    {
        n=n*-1;
        return -1*(n+sum(n-1));
    }
    
    
    else
    {
        return n+sum(n-1);
    }
}