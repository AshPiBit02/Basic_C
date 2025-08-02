#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to repeatedly apply the conditions
    while (1) //instead of 1 we can put any other non-zero integer and instead of while we can use for(;;) 
    {
        if (num % 2 == 0) {
            num = num / 2;
            printf("%d\t", num);
        } else {
            num = num * 3 + 1;
            printf("%d\t", num);
        }

        // Break the loop if the number becomes 1
        if (num == 1) 
        {
            break;
        }
    }

    return 0;
}
