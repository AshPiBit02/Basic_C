// WAP to illustrate the use of argumented macro-substitution. The program should ask radius and display the area of a circle.
#include<stdio.h>
#define Loop for(i=0;i<n;i++)
void main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    int num[n];
    Loop
    {
        printf("Enter integer %d:",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    avg=(float)sum/n;
    printf("The average of the input integer is %0.2f",avg);
}