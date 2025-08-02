// WAP to enter a 3x3 matrix and display it and also the sum of diagonal elements only.
#include<stdio.h>
void main()
{
    int i,j,matrix[3][3],sum=0;
    printf("Enter the elements of 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The entered 3x3 matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
            if(i==j)
            {
                sum+=matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of diagonal elements of the matrix is %d",sum);



}