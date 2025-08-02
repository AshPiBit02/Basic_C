#include<stdio.h>
void main ()
{
    int i,sum=0;
    for(i=1;i<=20;i++)
    {
        sum+=i*3;
    }
    printf("%d",sum);
}