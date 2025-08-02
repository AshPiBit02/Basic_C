#include<stdio.h>
void main()
{
    int A,B;
    printf("Enter 1st input(1 or 0):\n");
    scanf("%d",&A);
    printf("Enter 2nd input(1 or 0):\n");
    scanf("%d",&B);
    printf("AND Gate Operation");
    if((A!=1 && B!=1) && (A!=0 && B!=0))
    {
        printf("Invalid input!");
    }
    else
    {
        if(A==1 && B==1)
        {
            printf("\nThe output is 1.");
        }
        else
        {
            printf("\nThe output is 0.");
        }
    }

}