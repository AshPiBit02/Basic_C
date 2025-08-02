#include<stdio.h>
void main ()
{
    int sum=0,i=1;
    while(i<=100000000)
    {
        sum +=i;
        i++;
    }
    printf("sum is %d \n",sum);
}