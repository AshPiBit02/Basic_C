#include<stdio.h>
int fibo(int);
void main()
{
    int n,i;
    printf("Enter the required number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
}
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
