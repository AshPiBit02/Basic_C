// WAP to display the charaterd stored in previous created file "character.txt".
#include<stdio.h>
void main()
{
    char a;
    FILE *x;
    x=fopen("D:file\\character.txt","r");
    a=fgetc(x);
    printf("The string stored in the file character.txt is: %c",a);
    fclose(x);
}