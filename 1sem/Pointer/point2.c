// WAP to illustrate the use of void pointer.
#include<stdio.h>
void main()
{
    int a = 10;
    float b = 20.5;
    char c = 'A';
    void *ptr;
    // Assign the address of variable 'a' to the pointer 'ptr'
    ptr = &a;
    // Print the value at the address pointed by 'ptr' after casting it to an integer pointer
    printf("Address of a: %d\n",*(int*)ptr);
    // Assign the address of variable 'b' to the pointer 'ptr'
    ptr = &b;
    // Print the value at the address pointed by 'ptr' after casting it to a float pointer
    printf("Address of b: %.2f\n",*(float*)ptr);
    ptr = &c;
    printf("Address of c: %c\n",*(char*)ptr);
}