// WAP to enter two matrix and check where the entered matrix is equal or not.
#include<stdio.h>
#define loop1 for(i=0;i<3;i++)
#define loop2 for(j=0;j<3;j++)
void main()
{
    int i,j,count=0;
    int matrix[3][3],matrix1[3][3];
    printf("Enter the elements of matrix_1 and matrix_2 respectively\n");
    loop1
    {
        loop2
        {
            printf("Enter the element matrix_1[%d][%d] and matrix_2[%d][%d] repectively\n",i+1,j+1,i+1,j+1);
            scanf("%d%d",&matrix[i][j],&matrix1[i][j]);
        }
    }
    printf("Enter entered matrix are:\n");
    loop1
    {
        loop2
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     loop1
    {
        loop2
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    loop1
    {
        loop2
        {
            if(matrix[i][j]==matrix1[i][j])
            {
                count++;
                
            }
        }
    }
    if(count==9)
    {
        printf("Equal matrix.");
    }
    else
    {
        printf("Not equal matrix.");
    }
    
}