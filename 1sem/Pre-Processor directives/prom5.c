// WAP to define a constant n=5 using a simple marcro substitution directive. The program should ask any
// five integers and display the sum.
#include<stdio.h>
#define n 5
void main()
{
    int i,array[n],sum=0;
    printf("Enter the five integers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("The sum is %d",sum);
}