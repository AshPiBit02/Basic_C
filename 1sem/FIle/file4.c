// WAP to enter a number and find its table and store table in file "table.txt".
#include <stdio.h>
#define loop for (i = 1; i <= 10; i++)
void main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    FILE *x;
    x = fopen("D:file\\table.txt", "w");
    loop
    {
        fprintf(x, "\n%dx%d=%d", n, i, n * i);
    }
    fclose(x);
    int o, j, t;
    x = fopen("D:file\\table.txt", "r");
    printf("The table of %d is\n", n);
    while (fscanf(x, "%dx%d=%d", &o, &j, &t) != EOF)
    {
        printf("%dx%d=%d\n", o, j, t);
    }
    fclose(x);
}