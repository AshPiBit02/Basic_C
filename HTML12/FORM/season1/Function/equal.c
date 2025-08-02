#include<stdio.h>
void check(int,int);
void main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    check(a,b);
}
void check(int a, int b)
{
    if(a==b)
    {
        printf("They are equal.");
    }
    else{
        printf("They are not equal.");
    }
}