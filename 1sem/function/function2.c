// WAP using function getcharacter() that accepts a character and returns it to the main() which is finally displayed there.
#include <stdio.h>
char getcharacter();
void main()
{
    char ch;
    ch=getcharacter();
    printf("Character you enterd is:%c",ch);
}
char getcharacter()
{
    char ch;
    printf("Enter any character form keyboard\n");
    scanf("%c",&ch);
    return ch;
}