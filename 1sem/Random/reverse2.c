// WAP to enter a 3-digit integer and display it in reverse order.
#include<stdio.h>
void main()
{
    int num,n1,n2,n3;
    printf("Enter the 3-digit integer:");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    printf("The reverse of the number is %d%d%d",n1,n2,n3);
}