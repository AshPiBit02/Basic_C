// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=7;i++)
//     {
//         for(j=i;j<=7;j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
    
// }
#include<stdio.h>
void main()
{
    int i,j;
    for(i=7;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}