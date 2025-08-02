//n employees and display their salary of 1 year.
#include<stdio.h>
struct employee
{
    char name[100];
    char address[100];
    float salary;
};
void main()
{
    int n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct employee x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name address and salary:");
        scanf("%s%s%f",&x[i].name,&x[i].address,&x[i].salary);
    }
    printf("\n Name \t Address \t Monthly salary \t Salary of one Year");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%s\t%0.2f\t%0.2f",x[i].name,x[i].address,x[i].salary,x[i].salary*12);
    }
}