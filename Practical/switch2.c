#include<stdio.h>
void main()
{
    int add,subtract,choice,a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\n1. Addition \n2. Subtraction");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        add=a+b;
        printf("%d is the sum.",add);
        break;
        case 2:
        subtract=a-b;
        printf("%d is the difference.",subtract);
        break;
        default:
        printf("Invalid choice!");
        
    }
}


