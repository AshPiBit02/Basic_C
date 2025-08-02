// The names of employees of an organization are stored in three arrays, namely firstname, middlename 
// and lastname. WAP to concatenate the three parts into one string to be called name. 
#include<stdio.h>
#include<string.h>
void main()
{
    char firstname[100]="Aashish";
    char middlename[200]=" Kumar";
    char lastname[100]=" Chaudhary";
    char name[100];
    strcat(firstname,middlename);
    strcat(firstname,lastname);
    strcpy(name,firstname);
    printf("%s",name);
}