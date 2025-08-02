#include<stdio.h>
void main()
{
    float per;
    printf("Enter percentage:\n");
    scanf("%f",&per);
    int n=per/10;
    switch(n)
    {
        case 10:
        printf("Distinction");
        break;
        case 9:
        printf("Distinction");
        break;
        case 8:
        printf("Distinction");
        break;
        case 6:
        printf("First division");
        break;
        case 5:
        printf("Second division");
        break;
        case 4:
        printf("Third division");
        break;
        default:
        printf("Failed");
        break;
    }
}