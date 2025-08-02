// WAP to illustrate the use of double pointer.
#include<stdio.h>
void main()
{
    int a=20;
    int *p,****s;
    int **q,***r;
    p=&a;
    q=&p;
    r=&q;
    s=&r;
    printf("The value stored in a is %d\n",a);
     printf("The value stored in p is %d\n",*p);
      printf("The value stored in q is %d\n",**q);
       printf("The value stored in r is %d\n",***r);
        printf("The value stored in s is %d\n",****s);
        // the more * pointer you declare the more pointer variable you store in it
        
}