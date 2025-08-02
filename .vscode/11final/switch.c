#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\n Chose your operation:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("\nThe sum of a and b is %d",a+b);
        break;
        case '-':
        printf("\nThe difference of a and b is %d",a-b);
        break;
        case '*':
        printf("\nThe multiple of a and b is %d",a*b);
        break;
        case '/':
        printf("\nThe division of a and b is %d",a/b);
        break;
        default:
        printf("\n Invalid choice.");
    }

}