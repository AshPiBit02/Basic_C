// WAP to enter a 3x3 matrix and display it and also the sum of the diagonal elements only.
#include <stdio.h>
void main()
{
    int i, j, sum = 0;
    int matrix[3][3];
    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element:[%d][%d]", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The entered 3x3 matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The diagonal elements are: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }
    printf("\nThe sum of the diagonal elements is %d", sum);
}