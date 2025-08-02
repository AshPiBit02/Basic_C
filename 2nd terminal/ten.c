#include<stdio.h>
int fibo(int);
void main()
{
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("%d\t",fibo(n));
}
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    return fibo(n-1)+fibo(n-2);
}