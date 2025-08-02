//To find the sum of n square numbers.
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*i );
        sum+=i*i;
    }
    printf("\nThe sum is %d",sum);

}