// WAP to illustrate the use of argumented macro-substitution. The program should ask radius and display the area of a circle
// #include<stdio.h>
// #define AREA(r) (r*r*3.14)
// void main()
// {
//     float r;
//     printf("Enter the radius of the circle:");
//     scanf("%f",&r);
//     printf("The are of the circle is %0.2f square units.",AREA(r));
// }

#include<stdio.h>
#define SI(p,t,r) ((p*t*r)/100) // instead of SI(p,t,r) we can also use SI() or SI
void  main()
{
    float p,t,r;
    printf("Enter principle amount:");
    scanf("%f",&p);
    printf("Enter time in year:");
    scanf("%f",&t);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("The Simple Interest is Rs %0.2f",SI(p,t,r));
}