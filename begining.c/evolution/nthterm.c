#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter required no. of terms:");
    scanf("%d",&n);
    for(i=1;i<=n*2;i=i+2)
    {
    printf("%d ",i);
    }
}