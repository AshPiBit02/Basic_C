#include<stdio.h>
void main()
{
    FILE *a;
    char name[100];
float salary;
a=fopen("employee.txt","w");
printf("Enter name & salary of an employeee:\n");
scanf("%s%f",&name,&salary);
fprintf(a,"%s\t%f",name,salary);
fclose(a);
}