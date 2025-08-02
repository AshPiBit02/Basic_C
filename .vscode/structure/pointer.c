#include<stdio.h>
void main()
{
    int *a,*b;
    int x,y,z;
    a=&x;
    b=&y;
    printf("%d%d",&x,&y);
    z=*a-*b;
    printf("%d",z);
}