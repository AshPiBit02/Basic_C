#include<stdio.h>
void main()
{
    int num[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(num)/sizeof(num[0]);
    printf("Odd numbers are: ");
    for(int i=0;i<n;i++)
    {
    if(num[i]&1)
    {
        printf("%d\t",num[i]);

    }
    }
    printf("\nEven numbers are:");
    for(int i=0;i<n;i++)
    {
        if(num[i]&1)
        {
            printf("");
        }
        else
        {
            printf("%d\t",num[i]);
        }
    }
}