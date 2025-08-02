#include <stdio.h>

int main() {
    int row,column;
    printf("Enter the size of matrix:");
    scanf("%d%d",&row,&column);
    int matrix[row][column];

    printf("Enter elements of the %dx%d matrix:\n",row,column);

    // Input the matrix elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nThe entered %dx%d matrix is:\n",row,column);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
