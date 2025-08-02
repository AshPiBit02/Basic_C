#include<stdio.h>
void main()
{
    float cen,Fah;
    printf("Enter the temperature in centigrade:");
    scanf("%f",&cen);
    Fah=1.8*cen+32;
    printf("The given tempreature is %0.2f Fahrenheit in fahrenheit scale.",Fah);
}