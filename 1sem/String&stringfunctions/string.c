// WAP to read a string and convert it into uppercase and also lowercase.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[100];
    printf("Enter a string:");
    gets(st); // or scanf("%s",&st);
    printf("In uppercase: %s\n",strupr(st));
    printf("In uppercase: %s",strlwr(st));
}