#include<stdio.h>
void main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive nummber",a);
    }
    else if(a<0)
    {
        printf("%d is negative number",a);
    }
    else
    {
        printf("%d is neutral number",a);
    }
  
}