#include<stdio.h>
void main()
{
    float s1,s2,s3,s4,s5,net,per;
printf("Enter the marks of five subject");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
net=s1+s2+s3+s4+s5;
per=(net/500.0)*100;
printf("%f is the percentage of whole subject",per);
}