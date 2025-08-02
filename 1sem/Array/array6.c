// WAP using array to enter integers and sort them in ascending order.
#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter array[%d]:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("The sorted elements of array in ascending order is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }

}