#include<stdio.h>
void main()
{
    int i,n,a;
    printf("Enter required no. of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    a=i*i;
    printf("%d ",a);
    }
}