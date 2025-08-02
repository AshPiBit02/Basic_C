// WAP to enter a 3x3 matrix and display the sum of each row and each colum.
#include<stdio.h>
void main()
{
    int i,j,sum_row1=0,sum_row2=0,sum_row3=0,sum_column1=0,sum_column2=0,sum_column3=0,matrix[3][3];
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element:[%d][%d]:",i+1,j+1);
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
    printf("\nThe first row elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0)
            {
                printf("%d ",matrix[i][j]);
                sum_row1+=matrix[i][j];
            }
        }
    }
    printf("& the sum is %d",sum_row1);
    printf("\nThe second row elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1)
            {
               printf("%d ",matrix[i][j]);
                sum_row2+=matrix[i][j];
            }
        }
    }
    printf("& the sum is %d",sum_row2);
    printf("\nThe third row elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==2)
            {
                printf("%d ",matrix[i][j]);
                sum_row3+=matrix[i][j];
            }
        }
    }
    printf("& the sum is %d",sum_row3);
    printf("\nThe first column elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==0)
            {
                printf("%d ",matrix[i][j]);
                sum_column1+=matrix[i][j];
            }
        }
    }
    printf("& the sum is %d",sum_column1);
    printf("\nThe second column elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==1)
            {
                printf("%d ",matrix[i][j]);
                sum_column2+=matrix[i][j];
            }
        }
    }
    printf("& the sum is %d",sum_column2);
    printf("\nThe third column elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==2)
            {
                printf("%d ",matrix[i][j]);
                sum_column3+=matrix[i][j];
            }
        }
    }
    printf("& the sum is %d",sum_column3);
}