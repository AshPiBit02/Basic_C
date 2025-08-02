#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    int largest=arr[1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("The largest element is %d and smallest is %d",largest,smallest);

}