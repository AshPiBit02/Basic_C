// To display memory and address
#include<stdio.h>
#define TYPEOF(x) _Generic((x), \
    int: "int")
void main()
{
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    printf("The memory adress is: %u\n",&n);
    printf("The size of the memory taken is %d",sizeof(n));
    printf("The type of %d", TYPEOF(n));
}