#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter required no. of pattern:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("5");
        }
        printf(" ");
    }
}