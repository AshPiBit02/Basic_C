//Program to calculate area of rectangle,triangle,& circle.
#include<stdio.h>
void main()
{
  float l,b,h,r,ar,at,ac;
  printf("Enter lenght, breadth, height, and radius");
  scanf("%f%f%f%f",&l,&b,&h,&r);
  at=1/2.0*b*h;
  ar=l*b;
  ac=22/7.0*r*r;
  printf("%f is area of rectange    ",ar);
  printf("%f is area of triangle"   ,at);
  printf("%f is arra of circle",ac);

}





