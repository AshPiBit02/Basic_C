#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the required no. of terms:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("+");
        }
        printf("\n");
    }
}