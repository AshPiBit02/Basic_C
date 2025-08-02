#include<stdio.h>
void check();
void main()
{
check();
}
void check()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is positive number.",x);
    }
    else if(x<0)
    {
        printf("%d is negative number.",x);
    }
    else
    {
        printf("%d is neutral number.",x);
    }

}
