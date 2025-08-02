#include <stdio.h>

// Function to solve Josephus problem using recursion
int josephus(int n, int k) {
    if (n == 1)
        return 0; // Base case: If there's only one person, they survive (0-indexed).
    else
        return (josephus(n - 1, k) + k) % n; //Recursive case
}

int main() {
    int n, k;

    // Input number of people and step size
    printf("Enter the number of people: ");
    scanf("%d", &n);
    printf("Enter the step size: ");
    scanf("%d", &k);

    // Get the position of the survivor (1-indexed)
    int survivor = josephus(n, k) + 1; 
    printf("The safe position is: %d\n", survivor);
    return 0;
}