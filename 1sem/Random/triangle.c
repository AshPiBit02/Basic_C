#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter three sides of a triangle:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x==y||x==z || y==z)
    {
        printf("The triangle is Isoscles triangle.");
    }
    else if(x==y==z)
    {
        printf("The triangle is Equilateral triangle.");
    }
    else
    {
        printf("The triangle is Scalene triangle.");
    }
    printf("\nThe Area of the triangle is %d units.",x*y*z);
}