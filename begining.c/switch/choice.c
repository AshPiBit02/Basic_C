#include<stdio.h>
void main () 
{
    int n;
printf("Enter your choice:");
printf("\nEnter: \n1 for range(1 to 10), \n2 for range(11 to 20) and \n3 for range (21 to 30)\n");
scanf("%d",&n);
switch(n)
{
    case 1:
    printf("\nYour choice is 1 to 10.");
    break;
    case 2:
    printf("\nYour choice is 11 to 20.");
    break;
     case 3:
    printf("\nYour choice is 21 to 30.");
    break;
    default:
    printf("your choice is invalid.");
}

}
