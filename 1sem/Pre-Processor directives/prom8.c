// WAP to illustrate the use of File Inclusion directive. Create a file called "test.h" and define a sting N="You have included 
// this file test.h" inside it. Now write a C-program to include this file "test.h" and display the message in that file.
#include<stdio.h>
#define loop for(i=0;i<8;i++)
#include "test.h"
void main()
{
    int i;
    loop
    {
     printf("%s\n",N);
    }
}