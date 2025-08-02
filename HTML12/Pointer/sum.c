#include<stdio.h>
void main()
{
    int *x,*y;
    int a,b;
    x=&a;
    y=&b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d",*x+*y);

}