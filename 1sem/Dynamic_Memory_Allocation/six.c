#include <stdio.h>
#include <stdlib.h>              

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *p = (int*)calloc(n, sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    // Read the elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter the element[%d]: ", i + 1);
        scanf("%d", p + i);
    }

    // Print the entered elements
    printf("The entered elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // Bubble sort algorithm to sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    // Print the sorted elements
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // Free the allocated memory
    free(p);

    return 0;
}