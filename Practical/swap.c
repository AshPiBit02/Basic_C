#include<stdio.h>
void main()
{
    int a,b,c,*x,*y;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Before initially a=%d and b=%d",a,b);
    x=&a;
    y=&b;
    c=*x;
    *x=*y;
    *y=c;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}