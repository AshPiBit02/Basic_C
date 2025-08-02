// WAP using array to enter any ten integers and find the greatest among them.
#include<stdio.h>
void main()
{
    int i,greatest,num[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&num[i]);
    }
    greatest=num[0];
    for(i=0;i<10;i++)
    {
        if(num[i]>greatest)
        {
            greatest=num[i];
        }
    }    
    printf("The greatest number is %d",greatest);
}