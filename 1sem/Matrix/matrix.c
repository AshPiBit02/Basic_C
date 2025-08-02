#include<stdio.h>
void main()
{
    int row,column;
    printf("Enter the size of matrix:\n");
    scanf("%d%d",&row,&column);
    int matrix[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Enter %dx%d matrix is:\n",row,column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}