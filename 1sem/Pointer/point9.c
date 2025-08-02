// WAP using pointers to read in an array of integers and print its elements in reverse order.
#include<stdio.h>

void main() {
    int n;
    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    // Read the number of elements from the user
    scanf("%d", &n);

    // Declare an array with size n
    int arr[n];
    // Declare a pointer to the array
    int *ptr = arr; // Pointer to the array

    // Reading elements into the array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Printing elements in reverse order
    printf("Elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}
