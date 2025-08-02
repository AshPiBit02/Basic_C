// Using conditional operators
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter any two intergers:");
    scanf("%d%d",&x,&y);
    char chk=((x>y)?'T':'F');
    if(chk='T')
    {
        printf("The greatest number is %d",x);
    }
    else
    {
        printf("The greatest number is %d",y);
    }
}