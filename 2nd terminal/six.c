#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("employee.txt","r");
    char name[99];
    int roll;
    while(fscanf(x,"\n%s\t%d",&name,&roll)!=EOF)
    {
        printf("\n%s\t%d",name,roll);
    }
    fclose(x);
}