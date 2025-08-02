#include<stdio.h>
void main()
{
    int x,y;
    printf("The any two intergers:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping first number(x)=%d & second number(y)=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nBefore swapping first number(x)=%d & second number(y)=%d",x,y);
}