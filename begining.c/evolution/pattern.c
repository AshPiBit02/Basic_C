#include<stdio.h>
void main()
{
    int i,n,pat;
    printf("Enter the first number:");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    { 
        printf("%d ",n);
    if(n%2==0)
    {
        n=n*2+3;
    }
    else
    {
        n=n*2;
    }
     
    }
   
}