#include<stdio.h>
void main()
{
    int dividend,divider,quotient,remainder;
    printf("Enter Dividend and Devisor respectively:\n");
    scanf("%d%d",&dividend,&divider);
    if(divider==0)
    {
        printf("Error! Divisor can't be 0.");
    }
    else
    {
        quotient=dividend/divider;
        remainder=dividend%divider;
        printf("The quotient is %d\n",quotient);
        printf("The remainder is %d",remainder);
    }
}