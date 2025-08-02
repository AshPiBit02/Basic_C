// #include<stdio.h>
// void main()
// {
//     int a,b,x,y;
//     printf("Enter the value of a and b:\n");
//     scanf("%d%d",&a,&b);
//     x=a&b;
//     y=a|b;
//     printf("The result after ANDing %d and %d is %d\n",a,b,x);
//     printf("The result after ORing %d and %d is %d",a,b,y);
// }


#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,y;
    initialization:
    printf("Enter a decimal number:");
    scanf("%d",&x);
    printf("Enter the shift value:");
    scanf("%d",&y);
    int choice;
    option:
    printf("1.Left shift\n2.Right shift.\nchoice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("After left shifting of %d by %d bit the result is %d\n",x,y,x<<y);
        break;
        case 2:
        printf("After right shifting of %d by %d bit the result is %d\n",x,y,x>>y);
        default:
        printf("Invalid Selection!");
        exit(0);
    }
    int a;
    printf("\nEnter \n'0'To goto initilizing point\n'1'To goto option point\nElse press any key to exit.\n");
    scanf("%d",&a);
    if(a==0)
    {
        goto initialization;
    }
    else if(a==1)
    {
        goto option;
    }
    else
    {
        exit(0);
    }
}