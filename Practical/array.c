#include <stdio.h>

int main() {
    int numbers[10]; // Array to store 10 integer numbers
    int sum = 0;     // Variable to store the sum of numbers
    int i;

    // Input 10 integer numbers into the array
    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    printf("%d is the sum.",sum);
}