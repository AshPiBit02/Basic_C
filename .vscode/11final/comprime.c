#include<stdio.h>
void main ()
{
    int i,x;
    printf("Enter any number:");
    scanf("%d",&x);
    if(x==0 || x==1)
    {
        printf("The number is neither prime nor composit.");
    }
    else
    {
        for(i=3;i<=x;i++)
        {
            if(x%i==0)
            {
                printf("%d is composite number.",x);
               
            }
            else
            {
                printf("%d is prime number.",x);
               
            }
             break;
        }
    }
}