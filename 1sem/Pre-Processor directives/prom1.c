// WAP to illustrate global and local variable
#include<stdio.h>
int a=10,b=20; // Global variable
void sum();
void product();
void main()
{
    printf("The value of a is %d and b is %d",a,b);
    sum();
    product();
}
void sum()
{
    int s=a+b; // local varibale
    printf("\nThe sum is %d\n",s);
}
void product()
{
    int  pro; // local variable
    pro=a*b;
    printf("The product is %d",pro);
}