#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of inputs:\n");
    scanf("%d",&n);
    int num[n];
    printf("\nEnter the numbers:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int smallest=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }
    printf("The smallest number is %d",smallest);
}