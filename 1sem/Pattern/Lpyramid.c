#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);

    // Print the upper part of the pyramid
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf(" *"); //(printf(" *"); //diamond shape
        }
        printf("\n");
    }

    // Print the lower part of the pyramid
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf(" *"); //printf(" *"); // diamond shape
        }
        printf("\n");
    }

    return 0;
}