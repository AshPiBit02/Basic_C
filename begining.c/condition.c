#include<stdio.h>
void main ()
{
    int p;
    printf("Enter the number of days of attendence");
    scanf("%d",&p);
    if(p<20)
    {
    printf("He/she will no be able to give examination");
    }
    else 
    {
        printf("He/She can give examination");
    }
}