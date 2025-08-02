#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=n;i>=2;i--)
        {
            if(i%6==0&&i%10==0)
            printf("%d ",i);
            else{

            }
        }
        
        
    }
    else{

    }
}