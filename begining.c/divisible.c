// To check whether a no. is divisible by 4,7,9,or not.
#include<stdio.h>
void main()
{
int a;
printf("Input any number");
scanf("%d",&a);
if(a % 4 == 0)
{
    printf("%d is divisible by 4",a);
}
else if(a % 7 == 0)
{
    printf("%d is divisible by 7",a);
}
else if(a % 9 == 0)
{
    printf("%d is divisible by 9",a);
}
else
{
    printf("%d is not divisible by any of them",a);
}
}