#include<stdio.h>
void main ()
{
FILE *a;
a=fopen("aashish.txt","r");
char name [100];
char post [100];
float salary;
fprintf(a,"\n Name\tpost\t salary");
while(fscanf(a,"\n%s\t%s\t%f\n",&name,&post,&salary)!=EOF)
{
    if(salary>10000&&salary<20000)
    {
        printf("\n%s\t%s\t%f",name,post,salary);
    }
    else{

    }
}
fclose(a);
}