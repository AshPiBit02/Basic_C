#include<stdio.h>
void main()
{
    int a,b,x,y,z,c,d;
    printf("Enter any two integers:\n");
    scanf("%d%d",&a,&b);
    x=a&b;
    c=a|b;
    d=~a;
    printf("After bitwise ANDing:a*b is %d\n",x);
    printf("After bitwise ORing:a+b is %d\n",c);
    printf("After bitwise NOTing:~a is %d\n",d);// uses 2's complement simply ~a=-(a+1)
    printf("Enter an integer for left shift operation:\n");
    scanf("%d",&y);
    printf("After left shift by 2 bits,value = %d\n",y<<2); // =y*2(constant)^2(bit)
    printf("Enter another integer for right shift operation:\n");
    scanf("%d",&z);
    printf("After right shift by 2 bits, value = %d\n",z>>2);//=y*2(constanat)^-2(bit)

}