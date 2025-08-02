// WAP to enter a 3x3 matrix and multiply it by n integer.
#include<stdio.h>
void main()
{
    int i,j,n,matrix[3][3];
    printf("Enter the 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Enter the multiplying integer:");
    scanf("%d",&n);
    printf("The enter 3x3 matrix before multiplication is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The enter 3x3 matrix after multiplication is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",n*matrix[i][j]);
        }
        printf("\n");
    }

}