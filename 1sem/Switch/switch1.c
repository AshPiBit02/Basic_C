// WAP to display the following menu:
// i. To check if the given number is odd or even.
// ii. To find the sum of N numbers.
// iii. To find the sum of square of two numbers.
// iv. exit from program.
// And perform tasks as per user's choice unitll the user wants to exit.
#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum=0,op;
    printf("----------------MENU---------------\n");
    printf("1.Finding odd and even \n2.Sum of N numbers \n3.sum of N square numbers.\n");
    printf("Enter your choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("Enter an integer:");
        scanf("%d",&n);
        if(n&1)
        {
            printf("%d is odd number.",n);
        }
        else
        {
            printf("%d is even  number.",n);
        }
        case 2:
        

    }
}