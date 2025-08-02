#include <stdio.h>

void main() {
    int n, i, j;
    printf("The height of the pyramid: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1)) {
                printf("*");
            } else {
                printf(" "); // Print a space instead of an empty string
            }
        }
        printf("\n");
    }
}

