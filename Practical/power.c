#include<stdio.h>
int power (int,int);
void main()
{
    int a,b;
    printf("Enter any number and it's power respectively:");
    scanf("%d%d",&a,&b);
    printf("%d is the value.",power(a,b));
}
int power (int a,int b)
{
    if(a==1 || b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
}