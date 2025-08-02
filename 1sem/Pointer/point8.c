// WAP to illustrate pointer arithmetic.
#include<stdio.h>
#define loop for(i=0;i<5;i++)
void main()
{
    // Declare an integer variable 'i' and an integer array 'num' with 5 elements
    int i,num[5];
    // Declare a pointer to an integer 'p'
    int *p;
    // Initialize the pointer 'p' to point to the first element of the array 'num'
    p=num;
    // Assign the value 1 to the location pointed to by 'p' (i.e., num[0])
    *p=1;
    // Increment the pointer 'p' to point to the next element in the array (i.e., num[1])
    p++;
    // Assign the value 2 to the location pointed to by 'p' (i.e., num[1])
    *p=2;
    // Set the pointer 'p' to point to the third element of the array 'num' (i.e., num[2])
    p=&num[2];
    // Assign the value 3 to the location pointed to by 'p' (i.e., num[2])
    *p=3;
    // Set the pointer 'p' to point to the fourth element of the array 'num' (i.e., num[3])
    p=num+3;
    // Assign the value 4 to the location pointed to by 'p' (i.e., num[3])
    *p=4;
    // Reset the pointer 'p' to point to the first element of the array 'num' (i.e., num[0])
    p=num;
    // Assign the value 5 to the location 4 elements ahead of 'p' (i.e., num[4])
    *(p+4)=5;
    loop
    {
        printf("%d\t",num[i]);
    }
}