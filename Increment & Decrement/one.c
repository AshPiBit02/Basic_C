// WAP a program to illustrate the use of ++ operator in postfix and prefix nation.
#include<stdio.h>
void main()
{
    int a=10;
    printf("a=%d\n",a);
    printf("a=%d\n",++a); //a=a+1 and then a is used
    printf("a=%d\n",a++); //here a is used first then increased by 1
    printf("a=%d\n",a); // a is simply used
}