#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter any three integers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x<y&&y<z)
    {
        printf("%d is the middle one among the integers.",y);
    }
    else if(y<x&&x<z)
    {
        printf("%d is the middle one among the integers.",x);
    }
    else
    {
       printf("%d is the middle one among the integers.",z); 
    }
}