//Average of 5 numbers.
#include<stdio.h>
void main ()
{
    float a1,a2,a3,a4,a5,Av;
    printf("Enter any five numbers");
    scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);
    Av=(a1+a2+a3+a4+a5)/5;
    printf("%f is the average of five numbers",Av);
}