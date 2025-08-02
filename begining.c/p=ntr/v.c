#include<stdio.h>
void main ()
{
    float p,v,n,r,t;
    r=0.0821;
    printf("Enter volume,no. of mole, and Tempreature:  ");
    scanf("%f%f%f",&v,&n,&t);
 p=n*r*t/v;
 printf("%f is the pressure of the gas",p);
}