#include<stdio.h>
void main()
{
    FILE *a;
    a=fopen("aashishh.txt","r");
    char name [100];
    char surname[100];
    float salary;
    
    while(fscanf(a,"\n%s\t%s\t%f",&name,&surname,&salary)!=EOF)
    {
        if(salary>10000&&salary<20000)
        {
            printf("\n%s\t%s\t%f",name,surname,salary);
        }
        
    }
    fclose(a);
}