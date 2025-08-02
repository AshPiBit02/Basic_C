// WAP using array to accept any five numbers and display the value stored only in the fourth address of the array using pointer and also its address.
#include<stdio.h>
#define loop for(i=0;i<5;i++)
void main()
{
    int n[5],i;
    printf("Enter any five integers:\n");
    loop
    {
        scanf("%d",&n[i]);
    }
    printf("The fourth element address is %u\n",n+3);
    printf("The fourth element is %d",*(n+3));
}