#include<stdio.h>
void main()
{
    int n,i;
    long int a;
    printf("Enter the vaule of n:");
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("The factorial is 1.");
    }
    else
    {
        a=1;
        for(i=n;i>1;i--)
        {
            a=a*i;
        }
        printf("The factorial is %d",a);
    }

}