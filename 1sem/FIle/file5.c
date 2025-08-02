// A file name "cal.txt" has several numbers as data in it. Now wap to display all those numbers.
#include <stdio.h>
void main()
{
    int num;
    FILE *x;
    x = fopen("D:file\\cal.txt", "r");
    printf("The numbers are:\n");
    while (fscanf(x, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }
    fclose(x);
}