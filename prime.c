#include<stdio.h>
#define loop for(i=1;i<=n;i++)
void main()
{
    int i,count=0,n,lp=0;
    printf("Enter a number to check, if the number is prime or not: ");
    scanf("%d",&n);
    loop
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number.\n",n);
    }
    else
    {
        printf("%d is not a prime number.\n",n);
    }
    
    while(lp<10)
    {
        main();
        lp++;

    }
}