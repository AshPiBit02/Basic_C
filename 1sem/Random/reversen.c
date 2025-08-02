// WAP to enter an integer and display it in reverse order.
#include<stdio.h>
void main()
{
    int  num,reverse_num=0,remainder;
    printf("Enter an integer:");
    scanf("%d",&num);
    printf("The reverse interger is:");
    while(num!=0)
    {
        reverse_num=num%10;
        remainder=num/10;
        num=num/10;
        printf("%d",reverse_num);
    }
   
}