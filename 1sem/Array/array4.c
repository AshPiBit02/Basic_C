// WAP using array to enter any 10 intergers and display all of the and also their sum
#include<stdio.h>
void main()
{
    int i,sum=0;
    int num[10];
    for(i=0;i<10;i++)
    {
        printf("Enter Array[%d]:",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("The elements are:");
    for(i=0;i<10;i++)
    {
        printf("%d\t",num[i]);
        
    }
    printf("\nThe sum is %d",sum);
}