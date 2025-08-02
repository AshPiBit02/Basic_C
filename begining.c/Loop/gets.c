#include<stdio.h>
void main ()
{
    char name[15];
    printf("Enter the name\n");
    gets(name);
    printf("The entered name is: \t");
    puts(name);
    getch();
}