

#include <stdio.h>
#include<string.h>
#include <conio.h>  // Only for Windows

int main() {
    char pin[4];
    char p[5]="2426";  // Assuming a 4-digit PIN + null character
    int i;

    printf("Enter your 4-digit PIN: ");

    for (i = 0; i < 4; i++) {
        pin[i] = getch();   // Get character without echoing
        printf("*");        // Display asterisk for each digit
    }
    pin[4] = '\0';  // Null-terminate the string

    printf("\nYour entered PIN is: %s\n", pin);
    if(strcmp(pin,p)==0)
    printf("You entered the correct PIN.");
    else
    printf("You entered the wrong PIN.");

    return 0;
}
