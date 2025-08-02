#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("employee.txt","w");
    char name[199];
    float salary;
    int n;
    do
    {
        printf("Enter name and salary:");
        scanf("%s%f",&name,&salary);
        fprintf(x,"\n%s\t%f",name,salary);
        printf("Press '1' to add more data:");
        scanf("%d",&n);
    }while(n==1);
    fclose(x);
}