#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);
    printf("/n Enter your choice:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("The sum of a and b is %d",a+b);
        break;
        case '-':
        printf("The difference of a and b is %d",a-b);
        break;
        case '*':
        printf("The product of a and b is %d",a*b);
        break;
        case '/':
        printf("The division of a and b is %d",a/b);
        break;
        case '%':
        printf("The modulus of a and b is %d",a%b);
        break;
        printf("\n Invalid choice");
    }
}