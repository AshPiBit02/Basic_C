// An employee record consists of its ID, name, age , salary and address.Write a menu driven program to perform following operation.
// i) Read the records of 3 employees
// ii) Display the record of all employees
// iii) Display the records of all the employees whose salary is greater then 10000 and age greater than 25 years.
// iv) Display the recors of employees form only "Pokhara".
// v)Exiting program.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define loop for(i=0;i<n;i++)
struct employee

{
    int ID,age;
    char name[50],address[90];
    float salary;
};
void main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct employee em[n];
    int i,op,yn;
    start: //Label for goto
    printf("\nMENU\n1.Input the records\n2.Display all records.\n3.Display records for salary>10000 and age>24\n4.Display records from Pokhara\n5.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        loop
        {
            printf("Enter the ID, name, salary, address and age for employee[%d]\n",i+1);
            scanf("%d%s%f%s%d",&em[i].ID,&em[i].name,&em[i].salary,&em[i].address,&em[i].age);
        }
        break;
        case 2:
        printf("Detail of all employees\n");
        printf("ID\t\tName\t\tAge\t\tSalary\t\tAddress");
        loop
        {
            printf("\n%d\t\t%s\t\t%d\t\t%.2f\t\t%s",em[i].ID,em[i].name,em[i].age,em[i].salary,em[i].address);
        }
        break;
        case 3:
        printf("Details of employees whose salary>10000 and age>25\n");
        printf("ID\t\tName\t\tAge\t\tSalary\t\tAddress\n");
        loop
        {
        if(em[i].salary>10000 && em[i].age>25)
        {
        printf("%d\t\t%s\t\t%d\t\t%.2f\t\t%s",em[i].ID,em[i].name,em[i].age,em[i].salary,em[i].address);
        }
        }
        break;
        case 4:
        printf("Details of employees from Pokhara\n");
        printf("Id\t\tName\t\tAge\t\tSalary\n");
        loop
        {
            if(strcmp(em[i].address,"pokhara")==0)
            printf("%d\t\t%s\t\t%d\t\t%.2f\n",em[i].ID,em[i].name,em[i].age,em[i].salary);
        }
        break;
        case 5:
        exit(0);
        default:
        printf("Invalid Selection\n");
        goto start;
    }
    printf("\nDo you want to continue? 1/0:");
    scanf("%d",&yn);
    if(yn==1)
    {
        goto start;
    }
    else
    {
        exit(0);
    }
}