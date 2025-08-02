#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter number of integer:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter integer %d : ",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("%d is the sum.",sum);


}