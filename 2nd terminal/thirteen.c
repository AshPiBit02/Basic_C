#include<stdio.h>
int power(int,int);
void main()
{
    int a,b;
    printf("Enter any number:");
    scanf("%d",&a);
    printf("Enter its power value:");
    scanf("%d",&b);
    printf("%d",power(a,b));
}
int power(int a,int b)
{
if(b==0)
return 1;
else
return a*power(a,b-1);
}