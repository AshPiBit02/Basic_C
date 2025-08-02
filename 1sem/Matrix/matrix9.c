// WAP to enter a 3x3 matrix and find its determinant.
#include<stdio.h>
void main()
{
    int i,j,det;
    int matrix[3][3];
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for(i=0;i<3;i++)
    
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    
    }
    for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        {
            det=matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2])
            -matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[2][0]*matrix[1][2])
            +matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[2][0]*matrix[1][1]);
        }
    }
    printf("The determinant of entered 3x3 matrix is %d.",det);

}