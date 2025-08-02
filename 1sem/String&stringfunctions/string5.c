#include <stdio.h>
#include <string.h>

void main() {
    // Declare a character array and initialize it with the string "ENGINEERING"
    char st[] = "ENGINEERING";
    // Calculate the length of the string
    int l = strlen(st);

    // Loop through the string in reverse order
    for (int i = l; i > 0; i--) {
        // Loop through the string from the beginning to the current index
        for (int j = 0; j < i; j++) {
            // Print the character at the current index
            printf("%c", st[j]);
        }
        // Print a new line after each iteration
        printf("\n");
    }
}