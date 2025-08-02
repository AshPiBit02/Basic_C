#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of inputs:\n");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int largest=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]>largest)
        {
            largest=num[i];
        }
    }
    printf("The largest number is %d",largest);
}