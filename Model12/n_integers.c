#include <stdio.h>

// Function to find the sum of n integer numbers
int sumOfNNumbers(int n) {
    int sum = 0, num;
    printf("Enter %d integer numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of integer numbers: ");
    scanf("%d", &n);

    int result = sumOfNNumbers(n);
    printf("Sum of %d numbers is %d\n", n, result);

    return 0;
}