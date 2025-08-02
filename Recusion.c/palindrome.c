#include<stdio.h>
int main()
{
    int n,n1,rem,rev=0;
    printf("Enter an interger:");
    scanf("%d",&n);
    n=n1;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(n1==rev)
    {
        printf("%d is a palindrome.",n);
    }
    else
    {
        printf("%d is not a palindrome.",n);
    }
}