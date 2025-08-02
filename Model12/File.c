//WAP to store name, address, salary and gender in a file data.txt. Program should ask or prompt
// the user to continue or not. Also display those record whose salary is more than 25k from the same fiel.
#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("data.txt","r");
    if(x==NULL)
    {
        printf("File doesn't exists!");
        exit(1);
    }
    char name[200];
    char address[999];
    char gender[44];
    float salary;
    int n;
    fprintf(x,"\nName\tAddress\tGender\tSalary");
    do
    {
        printf("Enter name, address, gender and salary:");
        scanf("%s%s%s%f",&name,&address,&gender,&salary);
        fprintf(x,"\n%s\t%s\t%s\t%0.2f",name,address,gender,salary);
        printf("\nPress 1 to add more data else press any key:");
        scanf("%d",&n);
    } while (n==1);
    fclose(x);
    x=fopen("data.txt","r");
    printf("\nName\tAddress\tGender\tSalary");
    while(fscanf(x,"\nname\taddress\tgender\tsalary",&name,&address,&gender,&salary)!=EOF)
    {
        if(salary>25000)
        {
            printf("\n%s\t%s\t%s\t%0.2f",name,address,gender,salary);
        }
        fclose(x);
    }
    
}