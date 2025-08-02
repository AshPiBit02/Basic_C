#include<stdio.h>
void main()
{
    float F,m,v,r;
    printf("Enter mass, velocity and radius for centripetal force respectively.");
    scanf("%f%f%f",&m,&v,&r);
    F=(m*v*v)/r;
    printf("%f is the required centripetal force.",F);
    printf("%f",F);
}