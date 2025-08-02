#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *ptr2;
    
    // malloc(): Allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory allocated using malloc.\n");

    // calloc(): Allocate memory for 5 integers (initialized to 0)
    ptr2 = (int *)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed!\n");
        free(ptr);
        return 1;
    }
    printf("Memory allocated using calloc.\n");

    // realloc(): Resize memory to store 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr2);
        return 1;
    }
    printf("Memory reallocated using realloc.\n");

    // free(): Deallocate memory
    free(ptr);
    free(ptr2);
    printf("Memory freed successfully.\n");

    return 0;
}
