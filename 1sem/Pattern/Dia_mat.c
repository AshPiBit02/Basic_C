#include <stdio.h>
#define loop for(k=0;k<5;k++)
void main()
{
    int i,j,k;
    loop
    {
    for (i = 1; i <= 51; i++)
    {
        for (j = 1; j <= 51; j++)
        {
             if(i==1 || i==51 || j==1 || j==51) 
            {
                printf("X");
            }
           else if (i == 25 || j == 25 || i == 5 || i == 10 || i == 15 || i == 20 || i == 30 || i == 35 || i == 40 || i == 45 || j == 5 || j == 10 || j == 15 || j == 20 || j == 30 || j == 35 || j == 40 || j == 45)
            {
                printf("O");
            }
            else
            {
                if(i==j)
                {
                    printf(" ");
                }
                else
                {
                printf("1");
                }
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    }
}