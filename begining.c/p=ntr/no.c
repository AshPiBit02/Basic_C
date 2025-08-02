#include<stdio.h>
void main ()
{
    int s,e,ss;
    printf("Enter salary & expenditure:  ");
    scanf("%d%d",&s,&e);
    ss=s-e;
    if(ss>e)
    {
        printf("%d is his saving",ss);
    }
    else
    {
        printf("%d is more than his salary so he is in loan now.",ss); 

    }

}