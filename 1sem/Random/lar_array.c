#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int num[n];
    for(i=1;i<=n;i++)
    {
        printf("Enter Array[%d]:",i);
        scanf("%d",&num[i]);
    }
    int largest=num[0];
    for(i=1;i<=n;i++)
    {
        if(largest<num[i])
        {
            largest=num[i];
        }
    }
    printf("The largest number is %d",largest);
}