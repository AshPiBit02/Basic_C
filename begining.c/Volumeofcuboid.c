#include<stdio.h>
void main()
{
    float a,l,b,h,Vcd,Vcb;
    printf("Enter side of cube and length, breadth, & height of cuboid");
    scanf("%f%f%f%f",&a,&l,&b,&h);
    Vcb=a*a*a;
    Vcd=l*b*h;
    printf("%f is volume of cube",Vcb);
    printf("%f is volume of cuboid",Vcd);
}