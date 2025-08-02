// WAP to create a file "calculation.txt" to store any five numbers and again display the numbers and their sum using putw and getw functioins.
#include <stdio.h>
#define loop for (i = 0; i < 5; i++)
void main()
{
    int i, num[5];
    FILE *p;
    p = fopen("D:file\\calculation.txt", "w");
    printf("Enter any five numbers\n");
    loop
    {
        scanf("%d\t", &num[i]);
        putw(num[i], p);
    }
    fclose(p);
    int n, sum = 0;
    p = fopen("D:file\\calculation.txt", "r");
    printf("The stored numbers are:\n");
    loop
    {
        n = getw(p);
        printf("%d\t", n);
        sum += n;
    }
    printf("\nThe sum is %d", sum);
    fclose(p);
}