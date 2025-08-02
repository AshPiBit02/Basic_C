// WAP to display the sum of the below pattern:
// 1+1/1!+1/2!+1/3!+1/4!+1/5!+1/6!+1/7!+1/8!+1/9!+..........n/n!
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    float sum = 0.0;
    pri("Enter the value of n: ");
    scanf("%d", &n);
    printf("The terms are: ");
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d ",i);
        }
        if(i>=1)
         {
            printf("+");
         }
       
         printf(" %d/%d! ",i,i);
         
       
    }

    for (int i = 1; i <= n; i++) {
        sum += (float)i / fact(i);
    }

    printf("\nThe sum of the series is: %f\n", sum);
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
