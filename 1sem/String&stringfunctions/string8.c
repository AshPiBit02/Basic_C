// WAP to read a string and check if it is palindrome without using strrev() function.
#include<stdio.h>
#include<string.h>  // for strlen()
int main()  // main function
{
    char st[100];
    int i,l;
    printf("Enter the string: ");
    gets(st);
    l=strlen(st);
    for(i=0;i<l;i++)
    {
        if(st[i]==st[l-i-1])
        {
            printf("%s is palindrome.",st);
        }
        else
        {
            printf("%s is not a palindrome.",st);
        }
    }
}