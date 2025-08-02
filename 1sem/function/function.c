// WAP using function add() to input any two integers and display their sum.
#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a,b;
    printf("Enter any two integers:\n");
    scanf("%d%d",&a,&b);
    printf("The sum of %d and %d is %d",a,b,a+b);
}