#include<stdio.h>
void cum(float);
void main()
{
    float r;
    printf("Enter radius of circle.");
    scanf("%f",&r);
    cum(r);
}
void cum(float r)
{
    float cir;
    cir=2*3.14*r;
    printf("%0.2f is the circumference of the circle.",cir);
}
