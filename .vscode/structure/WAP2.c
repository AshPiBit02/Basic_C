//WAP to enter name, post, address & salary of two employees properly using structure.
#include<stdio.h>
struct result
{
    char name[100];
    char post[100];
    char address[100];
    float salary;
};
void main()
{
    struct result a,b;
    printf("Enter name, post address & salary of first employees\n");
    scanf("%s%s%s%f",&a.name,&a.post,&a.address,&a.salary);
    printf("Enter name, post address & salary of second employees\n");
    scanf("%s%s%s%f",&b.name,&b.post,&b.address,&b.salary);
    printf("\n name \t      post \t      address \t     salary");
    printf("\n %s \t %s \t %s \t %f",a.name,a.post,a.address,a.salary);
    printf("\n %s \t %s \t %s \t %f",b.name,b.post,b.address,b.salary);
    
}
