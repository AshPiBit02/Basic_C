// WAP using array to enter any ten integers and separeate the even and odd numbers.
#include<stdio.h>
void main()
{
    int i,num[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&num[i]);
    }
    printf("The even numbers are: ");
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            printf("%d\t",num[i]);
        }
    }
    printf("\nThe odd numbers are: ");
    for(i=0;i<10;i++)
    {
        if(num[i]%2!=0)
        {
            printf("%d\t",num[i]);
        }
    }   

}