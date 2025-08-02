#include <stdio.h>

void convertToBinary(int num) {
    // Array to store binary digits
    int binary[32];
    int index = 0;

    // Handle the case for 0 separately
    if (num == 0) {
        printf("0");
        return;
    }

    // Loop to store the binary digits in reverse order
    while (num > 0) {
        binary[index] = num % 2;  // Store remainder (0 or 1)
        num = num / 2;            // Divide the number by 2
        index++;
    }

    // Print the binary digits in reverse order
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function to convert to binary
    convertToBinary(num);

    return 0;
}