// WAP to illustrate the concept of Automatic storage class.
#include <stdio.h>
void main() // Define the main function
{
    auto int n = 1;
    {
        auto int n = 2; // Declare a new local variable 'n' within this block and initialize it to 2
        {
            auto int n=3; // Declare another new local variable 'n' within this nested block and initialize it to 3
            printf("%d\n",n); // Print the value of the innermost 'n', which is 3
        }

        // The inner block ends here, so the innermost 'n' is destroyed
        printf("%d\n",n);
    } // Print the value of the 'n' in the middle block, which is 2
    printf("%d\n",n);
}