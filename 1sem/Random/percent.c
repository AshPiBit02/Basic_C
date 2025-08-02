#include<stdio.h>
void main()
{
    float per;
    printf("Enter percentage obtained:");
    scanf("%f",&per);
    if(per>=80)
    {
        printf("Distinction");
    }
    else if(per>=60)
    {
        printf("First division");
    }
    else if(per>=50)
    {
        printf("Second division");
    }
    else if(per>=40)
    {
        printf("Third division");
    }
    else
    {
        printf("Failed");
    }

}