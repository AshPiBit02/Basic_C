#include<stdio.h>
void main ()
{
int a,b,c,sum,mul;
printf("enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
mul=a*b*c;
printf("%d is the sum of the three numbers   ",sum);
printf("%d is the multiple of the three numbers",mul);
}