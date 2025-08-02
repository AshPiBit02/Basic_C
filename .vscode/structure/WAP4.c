//WAP to enter name, post & salary of n employees and display only those whose salary is greater tahn 50K.
#include<stdio.h>
struct employee
{
    char name[100];
    char post;
    float salary;
};
void main()
{
    struct employee a[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter name, post & salary\n");
        scanf("%s%d%f",&a[i].name,&a[i].post,&a[i].salary);
    }
    printf("\n Name \t Salary \t Salary");
    for(i=0;i<3;i++)
    {
        if(a[i].salary>50000)
        {

        printf("\n%s\t%s\t%0.2f",a[i].name,a[i].post,a[i].salary);
        }
    }
}