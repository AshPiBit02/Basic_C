// WAP to enter n integers and compute the sum of all the elements using pointers.
#include<stdio.h>
#define loop for(i=0;i<n;i++)
void main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int num[n],i,sum=0;
    loop
    {
        printf("Enter the number:");
        scanf("%d",&num[i]);
        sum+=*(num+i);
    }
    printf("Sum of all the elements is %d",sum);
}