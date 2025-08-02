#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%dx%d=%d",n,i,n*i);
    }

}