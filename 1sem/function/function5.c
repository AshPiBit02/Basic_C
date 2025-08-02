// With argument but no return
#include<stdio.h>
int sum(int a,int b)
{
    printf("The sum of a and b is %d",a+b);
}
void main()
{
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
}

//