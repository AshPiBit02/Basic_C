// 0 1 1 2 3 5 8 ..........
#include<stdio.h>
int fibo(int);
void main()
{
    int n;
    printf("Enter the required term:");
    scanf("%d",&n);
    printf("The fibonacci is %d",fibo(n));
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
    else{
        return fibo(n-1)+fibo(n-2);
    }
}