// WAP using array to enter ten integers and separate the odd and even numbers separately.
#include<stdio.h>
void main()
{
    int i;
    int num[10];
    for(i=0;i<10;i++)
    {
        printf("Enter array[%d]:",i);
        scanf("%d",&num[i]);
    }
    printf("The even numbers are: ");
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            printf("%d ",num[i]);
            
        }
    }
    printf("\nThe odd numbers are: ");
    for(i=0;i<10;i++)
    {
        if(num[i]%2!=0)
        {
            printf("%d ",num[i]);
            
        }
    }
}