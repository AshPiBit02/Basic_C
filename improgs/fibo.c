//Write a C program to generate fibonacci series.[2,3,5,8,...10 term]
#include<stdio.h>
int fibo(int);
void main()
{
    int n,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("The terms are:");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
}
int fibo(int n)
{
    if(n==1)
    {
    return 0;
    }
    else if(n==2)
    {
    return 1;
    }
    else
    {
    return fibo(n-1)+fibo(n-2);
    }
}