#include<stdio.h>
#define loop for(i=0;i<n;i++)
void main()
{
    int i,n;
    printf("Enter the number of integers in array:");
    scanf("%d",&n);
    int num[n];
    loop
    {
        printf("Enter the integer[%d]:",i+1);
        scanf("%d",&num[i]);
    }
    int small=num[0];
    int lar=num[0];
    loop
    {
        if(num[0]>num[i])
        {
            small=num[i];
        }
        if(num[0]<num[i])
        {
            lar=num[i];
        }
    }
    printf("\nThe smallest number in the array is %d",small);
    printf("\nThe largest number in the array is %d",lar);
    
    
}