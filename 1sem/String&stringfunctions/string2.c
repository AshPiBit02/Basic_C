// WAP to read a string and display it in reverse order without using strrev().
#include<stdio.h>
#include<string.h>
void main()
{
    char st[100];
    int i,l;
    printf("Enter the string: ");
    gets(st);
    l=strlen(st);
    printf("The entered string in reverse order is: ");
    for(i=l;i>=0;i--)
    {
        printf("%c",st[i]);
    }

}
// using strrev()
#include<stdio.h>
#include<string.h>
void main()
{
    char st[100];
    printf("Enter the string: ");
    gets(st);
    printf("The entered string in reverse order is:%s",strrev(st));
}