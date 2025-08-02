// WAP to enter two 3x3 matrix and find their product.
#include<stdio.h>
void main()
{
    int i,j,k,matrix_A[3][3],matrix_B[3][3],result[3][3];
    printf("Enter 3x3 matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix_A[i][j]);
        }
    }
    printf("Enter 3x3 matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix_B[i][j]);
        }
    }
    printf("The entered matrix A is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix_A[i][j]);
        }
        printf("\n");
    }
    printf("The entered matrix B is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix_B[i][j]);
        }
        printf("\n");
    }
     printf("The product of matrix A and matrix B is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0; // Initialize result element
            for (k = 0; k < 3; k++)
            {
                result[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}