#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num,n;
    begining:
    printf("Enter a number:");
    scanf("%d",&num);
    if(num&1)
    {
        printf("%d is odd.\n",num);
    }
    else
    {
        printf("%d is even\n",num);
    }
    printf("DO you want to continue? If yes enter 1 else enter any key:");
    scanf("%d",&n);
    if(n==1)
    {
        goto begining;
    }
    else
    {
        exit(0);
    }
    
}