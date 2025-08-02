#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the height of the diamond (half height): ");
    scanf("%d", &n);

    // Print the upper part of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars or "A" in the center
        for (j = 1; j <= 2 * i - 1; j++) {
            if (i == n && j == n)
             {
                printf("A");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    // Print the lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}