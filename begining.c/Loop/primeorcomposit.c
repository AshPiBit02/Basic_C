#include<stdio.h>
void main ()
{
    int a,x;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a==1||a==2)
    {
        printf("1&2 are neither prime nor composite.");
    }
    for(int i=3;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d is composite number.",a);
        }
        else 
        {
            printf("%d is prime number.",a);
        }
       
        

        break;
    }
    
    
}