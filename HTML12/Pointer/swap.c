#include<stdio.h>
void main()
{
    int *x,*y;
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a and b are %d and %d\n",a,b);
    x=&a;
    y=&b;
    int c=*x;
    *x=*y;
    *y=c;
    printf("After swapping a and b are %d and %d",*x,*y);
}