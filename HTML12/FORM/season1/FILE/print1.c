#include<stdio.h>
void main()
{
    FILE *a;
    a=fopen("message.txt","w");
    fprintf(a,"ALL IS WELL\n");
    fclose(a);
}