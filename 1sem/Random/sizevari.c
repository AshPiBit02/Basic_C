#include<stdio.h>
void main()
{
    int a=55;
    short int b=5;
    long int c=1568557;
    float d=3.15487945666664;
    double e=3.141592454666699265359;
    long double f=3.14159265358877410220336979323846;
    printf("The size of int is %zu bytes\n",sizeof(a));
    printf("The size of short int is %zu bytes\n",sizeof(b));
    printf("The size of long int is %zu bytes\n",sizeof(c));
    printf("The size of float is %zu bytes\n",sizeof(d));
    printf("The size of double is %zu bytes\n",sizeof(e));
    printf("The size of long double is %zu bytes\n",sizeof(f));

}