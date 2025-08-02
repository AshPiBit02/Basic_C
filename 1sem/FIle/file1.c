// WAP to read data from keyboard and write it to a file "character.txt".Again read teh same data from the file and display it.
#include <stdio.h>
void main()
{
    char a;
    FILE *x;
    x = fopen("D:file\\character.txt", "w");
    printf("Enter any charater form the keyboard:");
    scanf("%c", &a);
    fprintf(x, "%c", a); // fputc(a,x);
    printf("Data successfully written into file. Please check in drive F:");
    fclose(x);
}