// WAP to sort N interger values in an array using pointers.
#include <stdio.h>
#define loop for (i = 0; i < n; i++)
int main()
{
    int n, i;                                 // Declare variables n for number of elements and i for loop counter
    printf("Enter the number of elements: "); // Prompt user to enter number of elements
    scanf("%d", &n);                          // Read the number of elements from user input and store in n
    int arr[n];
    int *ptr = arr;                 // Declare a pointer ptr and initialize it to point to the first element of the array
    printf("Enter the elements: "); // Prompt user to enter the elements
    loop
    {
        scanf("%d", ptr + i); // Read each element and store it in the array using pointer arithmetic
    }

    // Bubble sort algorithm to sort the array in ascending order
    for (i = 0; i < n - 1; i++)
    { // Outer loop to iterate through each element
        for (int j = 0; j < n-1-i; j++)
        { // Inner loop to compare the current element with the rest
            if (*(ptr + i) > *(ptr + j))
            {                          // If current element is greater than the compared element
                int temp = *(ptr + i); // Swap the elements
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("Sorted array: "); // Print the sorted array
    for (int i = 0; i < n; i++)
    {                              // Loop through each element of the array
        printf("%d ", *(ptr + i)); // Print the element using pointer arithmetic
    }
    return 0; // Return 0 to indicate successful execution
}