#include<stdio.h>
void main()
{
    int n,x,y,z;
    printf("Enter a three digit number:");
    scanf("%d",&n);
    z=n%10;
    n=n/10;
    y=n%10;
    n=n/10;
    x=n%10; 
    printf("The reverse is %d%d%d",z,y,x);
}