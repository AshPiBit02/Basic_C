// WAP to illustrate the concept of static storage class.
#include<stdio.h>
static int a=10;
void next();
void test();
void best();
void main()
{
    test();
    test();
    test();
    test();
    best();
    best();
    best();
    next();
    next();
    next();
    next();
    test();
}
void test()
{
    static int a=0;
    printf("%d\n",a);
    a++;
}
void best()
{
    static int i=1; // If we don't use static then the value of i will be 1 everytime.
    printf("FUCKED%d\n",i);
    i++;
}
void next()
{
    printf("%d\n",a);
    a++;
}
