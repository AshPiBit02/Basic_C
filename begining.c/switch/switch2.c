#include<stdio.h>
void main ()
{
    int choice;
    printf("Which of these websites you visit the most?");
    printf("Select 1 facebook, 2 for Insta and 3 for Google.");
    printf("\n1=FACEBOOK \n2=INSTA \n3=GOOGLE\n");
    scanf("%d",&choice);
    switch(choice)

    {
        case 1:
        printf("\n You use FACEBOOK.");
        break;
        case 2:
        printf("\n You  use INSTA.");
        break;
        case 3:
        printf("\n You use GOOGLE.");
        break;
        default:
        printf("\n You have entered an invalid option.");
    }

}