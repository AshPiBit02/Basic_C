// WAP to find the sum of n numbers supplied by user using DMA
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *p;
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the element[%d]:",i+1);
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    printf("The sum of entered elements is %d",sum);
    free(p);

}