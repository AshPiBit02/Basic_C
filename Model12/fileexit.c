#include<stdio.h> 
void main()
{
    FILE *x;
    x=fopen("file.txt","w");
    if(x=NULL)
    {
        printf("File doesn't exists!");
        exit(1);
    }
    fprintf(x,"File found.");
    fclose(x);
}