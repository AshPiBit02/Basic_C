#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char name[100];
    int *p;
    strcpy(name,"Aashish Chaudhary");
    p=(char*)malloc(100*sizeof(char));
    if(p==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        strcpy(p,"Aashish is a Bachelor of Engineering student.");
    }
    printf("%s\n",name);
    printf("%s\n",p);
    p=(char*)realloc(p,50*sizeof(char));
    if(p==NULL)
    {
        printf("Unable to allocate Memory\n");
    }
    else
    {
        strcat(p,"He is a good student.");
    }
    printf("Name:%s\n",name);
    printf("Description:%s\n",p);
    free(p);

}