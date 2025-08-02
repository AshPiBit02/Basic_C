// WAp to read n numbers in an array and sort the elements in ascending order. Use DMA
#include<stdio.h>
#include<stdlib.h>
#define loop for(i=0;i<n;i++)
void main()
{
    int i,n,j,temp,min,*p;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    loop
    {
        printf("Enter the element[%d]:",i+1);
        scanf("%d",p+i);
    }
    printf("The entered before sorting are :");
    loop
    {
        printf("%d ",*(p+i));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }

        }
    }
    printf("\nThe elements after sorting are : ");
    loop
    {
        printf("%d ",*(p+i));
    }


}