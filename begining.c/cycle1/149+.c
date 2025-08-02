#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter required no. of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum+=i*i;
   
    }
     printf("%d ",sum);
}