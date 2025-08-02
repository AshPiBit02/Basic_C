// WAP to illustrate pointer declaration, initialixation and pointer dereferencing.
#include<stdio.h>
void main()
{
    int x=15;
    printf("Adress of x:%u\n",&x);
    int *ptr;
    ptr=&x;
    printf("Address stored in ptr:%u\n",ptr);
    printf("Value of pointer:%d\n",*ptr);
}