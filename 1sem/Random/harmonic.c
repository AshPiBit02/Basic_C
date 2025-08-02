// WAP to determine and print the sum of the harmonic series for a given value of n.
#include<stdio.h>
void main()
{
    int n;
    float sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The series is : ");
    for(int i = 1; i <= n; i++)
     {
        printf("1/%d + ",i);
        sum += 1.0/ i;
    }
    printf("\nSum of the harmonic series: %f\n", sum);
}
