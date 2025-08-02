#include<stdio.h>
void main()
{
    int i,j,n,op;
    printf("Enter the height of the pyramid:");
    scanf("%d",&n);
    start:
    printf("Enter:\n1.For pyramid up \n2.For pyramid down\nYour choice:");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
            {
                if((j>=n-(i-1)) && (j<=n+(i-1)))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
    }
        break;
    case 2:
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*n-1;j++)
            {
                if(j>=n-(i-1) && j<=n+(i-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
    }
        break;
    
    default:
    printf("Invalid choice!\n");
    goto start;
    }
    
}