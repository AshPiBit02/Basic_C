#include<stdio.h>
void main()
{
    int i,n;
    long int a;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("The factorial is 1");
    }
    else{
        a=1;
        for(i=n;i>1;i--)
        {
            a=a*i;
        }
        printf("The factorial is %d",a);
    }
}
