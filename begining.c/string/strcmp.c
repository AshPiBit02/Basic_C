#include<stdio.h>
#include<string.h>
void main ()
{
    char a[20]="Aashish";
    char b[20]="Aashish";
    int i=strcmp(a,b);
    if(i==0)
    {
        printf("Both strings are equal.");
    }
    else{
        printf("strings are not equal.");
    }
}