#include<stdio.h>
void main ()
{
    int a,b;
    char ch;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nEnter your choice:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+' :
        printf("\n The sum of a and b is %d",a+b);
        break;
        case '-' :
        printf("\n The difference of %d and %d is %d",a,b,a-b);
        break;
        case '*' :
        printf("\n The product of %d and %d is %d",a,b,a*b);
        break;
        case '/' :
        printf("\n The division of %d and %d is %d",a,b,a/b);
        break;
        case '%' :
        printf("\n The modulus of %d and %d is %d",a,b,a%b);
        break;
        
        printf("Invalid choice");

    }
}