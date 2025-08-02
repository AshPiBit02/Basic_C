#include<stdio.h>
void main ()
{
    float ex1,ex2,ex1sq,ex2sq,n,SD1,SD2,V1,V2;
    printf("Enter the sum of X of share A & B:");
    scanf("%f%f",&ex1,&ex2);
    printf("Enter the sum of Xsq of Share A & B:");k
    scanf("%f%f",&ex1sq,&ex2sq);
    printf("Enter the value of n:");
    scanf("%f",&n);
    SD1=sqrt((ex1sq/n)-((ex1/n)*(ex1/n)));
    V1=SD1*SD1;
    SD2=sqrt((ex2sq/n)-((ex2/n)*(ex2/n)));
    V2=SD2*SD2;
    printf("Variance of share A is %f",V1);
    printf("Variance of share B is %f",V2);
    if(V1>V2)
    {
        printf("Share A is more variance and less stable than share B.");
    }
    else
    {
        printf("Share B is more variance and less stable than share A.");
    }
}