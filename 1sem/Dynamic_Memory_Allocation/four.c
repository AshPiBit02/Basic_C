// WAP to read a list of integers using DMA and display the largest and smallest elements among them.
#include<stdio.h>
#include<stdlib.h>
#define loop for(i=0;i<n;i++)

void main()
{
    int n,i,*p,min,max;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    loop
    {
        printf("Enter the element[%d]:",i+1);
        scanf("%d",p+i);
    }
    min=*p;
    max=*p;
    loop
    {
        if(min>*(p+i))
        {
            min=*(p+i);
        }
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    printf("\nThe smallest number is %d",min);
    printf("\nThe largest number is %d",max);
    free(p);

    

    
}