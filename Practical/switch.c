#include<stdio.h>
void main()
{
    int choice,x,y;
    int sum,sub,product;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
    printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Greatest");
    printf("\n Choose any of them:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        sum=x+y;
        printf("The sum of %d and %d is %d",x,y,sum);
        break;
        case 2:
        sub=x-y;
        printf("The difference of %d and %d is %d",x,y,sub);
        break;
        case 3:
        product=x*y;
        printf("The product of %d and %d is %d",x,y,product);
        break;
        case 4:
        if(x>y)
        {
            printf("%d is greater.",x);
        }
        else
        {
            printf("%d is greater.",y);
        }
        break;
        default:
        printf("Invalid Choice! ");
    }

}