// WAP to read a string and check if it is palindrome by using strrev() function.
#include<stdio.h>
#include<string.h>
void main()
{
   char st[100];
   printf("Enter the string:");
   gets(st);
   if(st==strrev(st))
   {
    printf("%s is palindrome.",st);
   }
}