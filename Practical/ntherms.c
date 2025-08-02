#include <stdio.h>

int main() {
    int n;
    int number;
    int smallest, greatest;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Input the first number to initialize smallest and greatest
    printf("Enter number 1: ");
    scanf("%d", &number);
    smallest = greatest = number;

    // Loop to input the rest of the numbers and find smallest and greatest
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        // Update smallest and greatest if necessary
        if (number < smallest) {
            smallest = number;
        }
        if (number > greatest) {
            greatest = number;
        }
    }

    // Display the smallest and greatest numbers
    printf("The smallest number is: %d\n", smallest);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}