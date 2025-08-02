#include<stdio.h>
void main()
{
    int n[4][4],i,j,sum=0;
    printf("Enter 4*4 matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the element[%d][%d]:",i+1,j+1);
            scanf("%d",&n[i][j]);
            sum=sum+n[i][j];
        }
    }
    printf("Sum is %d",sum);
}
