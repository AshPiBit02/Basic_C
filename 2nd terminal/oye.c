#include<stdio.h>
struct employee{
    char name[100];
    float salary;
};
void main()
{
    int n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct employee a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name and salary:");
        scanf("%s%f",&a[i].name,&a[i].salary);
    }
    printf("\n Name \t Salary");
    for(i=0;i<n;i++)
    {
        if(a[i].salary>10000 && a[i].salary<15000)
        {
            printf("\n%s\t%0.2f",a[i].name,a[i].salary);
        }
        else
        {
            
        }
    }
}