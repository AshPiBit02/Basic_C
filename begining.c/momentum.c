#include<stdio.h>
void main ()
{
    float m,v,p;
    printf("Enter mass and velocity");
    scanf("%f%f",&m,&v);
    p=1/2.0*(m*v*v);
    printf("%f is the momentum of the system ",p);
}