// WAP to enter a 3x3 matrix and display them in a matrix format, and also the sum of all the elements.
#include<stdio.h>
void main()
{
    int i,j,sum=0;
    int matrix[3][3];
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            sum+=matrix[i][j];
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
    printf("The sum of all the element of the matrix is %d",sum);

}