#include<stdio.h>
void main()
{
    int num[]={0,2,-8,4};
    int n=sizeof(num)/sizeof(num[0]);
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