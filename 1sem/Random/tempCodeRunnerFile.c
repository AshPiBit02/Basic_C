#include<stdio.h>
int fibo(int);
void main()
{
    int n;
    printf("Enter the term:");
    scanf("%d",&n);
    printf("%d",fibo(n));
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
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,p;
    printf("Enter the base and the exponent:\n");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("%d raise to the power of %d is equal to %d",a,b,p);
}