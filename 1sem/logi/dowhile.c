#include<stdio.h>
void main()
{
    int i,odd_count=0,even_count=0,num;
    do
    {
        printf("Enter the element:");
        scanf("%d",&num);
        if(num%2==0)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
        printf("Enter 1 to add more elements else enter any integer:");
        scanf("%d",&i);
    }while(i==1);
    if(even_count==1 && odd_count==1)
    {
        printf("There is only one even number.\n");
        printf("There is only one odd number.\n");
    }
    else if(even_count==1 || odd_count<1)
    {
        printf("There is only one even number.\n");
        printf("There are %d odd number.\n",odd_count);
    }
    else if(even_count<1 || odd_count==1)
    {
        printf("There are %d even number.\n",even_count);
        printf("There is only oneodd number.\n");
    }
    else if(even_count==0 && odd_count==1)
    {
        printf("There is only one odd number.\n");
    }
    else if(even_count==1 && odd_count==0)
    {
        printf("There is only one even number.\n");
    }
    else if(even_count==0 && odd_count<1)
    {
        printf("There are %d odd numbers.",odd_count);
    }
    else if(even_count>1 && odd_count==0)
    {
        printf("There are %d even numbers.",even_count);
    }
    else
    {
        printf("There are %d even numbers",even_count);
        printf("\nThere are %d odd numbers",odd_count);
    }
}