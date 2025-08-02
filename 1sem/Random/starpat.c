#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=7;i=i+1)
    {
        for(int j=1;j<=i;j+2)
        {
            printf("*");
        }
        printf("\n");
    }
}