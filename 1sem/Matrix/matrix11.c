// WAP to enter 3-D 3x3 matrix and display it.
#include<stdio.h>
void main()
{
    int i,j,k,matrix[3][3][3];
    printf("Enter the 3-D matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter the element[%d][%d][%d]:",i+1,j+1,k+1);
                scanf("%d",&matrix[i][j][k]);
            }
        }
    }
    printf("The entered 3-D matrix is:\n");
    for(i=0;i<3;i++)
    {
        printf(" Layer %d:\n",i+1);
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("    %d\t",matrix[i][j][k]);
            }
            printf("\n");
        }
    }
    
}