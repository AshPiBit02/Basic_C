#include<stdio.h>
void main()
{
    int i,j;
    int matrix[3][3];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element[%d][%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((j%2)!=0)
            {
                sum+=matrix[i][j];
            }
        }
    }
    printf("The sum of even elements of the matrix is %d",sum);
}