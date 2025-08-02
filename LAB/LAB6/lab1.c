// WAP using array to enter any 10 integers and display all of them and their sum.
#include<stdio.h>
void main()
{
    int num[10],sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];    
    }
    for(int i=0;i<10;i++)
    {
        printf("The number %d is %d\n",i+1,num[i]);
    }
    printf("The sum of the numbers is %d",sum);
    printf("\n The  numbers are: ");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",num[i]);
        if((i+1)%5==0)
        {
            printf("\n");

        }
    }
}