#include<stdio.h>
#define loop for(i=0;i<n;i++)
void  main() 

{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arry[n],i,j;
    printf("Enter the elements:\n");
    loop
    {
        scanf("%d",&arry[i]);

    }
    printf("The elements in ascending order are: ");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arry[j]>arry[j+1])
            {
                int temp=arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=temp;

            }
            
        }
        
    }
    loop
    {
        printf("%d ",arry[i]);
    }
}