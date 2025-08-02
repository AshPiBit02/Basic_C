#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *name;
    name=(char*)malloc(10);
    strcpy(name,"Aashish");
    printf("%s",name);
    name=(char*)realloc(name,60);
    strcpy(name," Chaudhary");
    printf("%s",name);
    free(name);
}