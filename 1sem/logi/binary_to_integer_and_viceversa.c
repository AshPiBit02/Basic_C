#include <stdio.h>
#include <math.h>

// Function to convert a decimal number to binary
void convertToBinary(int num) {
    // Array to store binary digits
    int binary[32];
    int index = 0;

    // Handle the case for 0 separately
    if (num == 0) {
        printf("Binary equivalent: 0\n");
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

// Function to convert binary number (as string) to decimal
int convertToDecimal(char binary[]) {
    int decimal = 0;
    int length = 0;

    // Find the length of the binary string
    while (binary[length] != '\0') {
        length++;
    }

    // Convert binary string to decimal using positional value
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);  // Add the corresponding power of 2
        }
    }

    return decimal;
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Convert Decimal to Binary\n");
    printf("2. Convert Binary to Decimal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        // Input a decimal number
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        // Convert and display the binary equivalent
        convertToBinary(num);

    } else if (choice == 2) {
        char binary[32];
        // Input a binary number (string)
        printf("Enter a binary number: ");
        scanf("%s", binary);

        // Convert and display the decimal equivalent
        int decimal = convertToDecimal(binary);
        printf("Decimal equivalent: %d\n", decimal);

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
