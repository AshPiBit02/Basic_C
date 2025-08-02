#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);

    // Print the upper part of the pyramid
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    // Print the lower part of the pyramid
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}