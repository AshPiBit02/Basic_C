#include<stdio.h>
struct employee
{
    char name[50];
    int roll;
    float gpa;
};
void main()
{
struct employee a[2];
int i;
for(i=0;i<2;i++)
{
    printf("Enter name roll and gpa:");
    scanf("%s%d%f",&a[i].name,&a[i].roll,&a[i].gpa);
}
printf("\n Name \t Roll no. \t GPA");
for(i=0;i<2;i++)
{
    printf("\n%s\t%d\t%f",a[i].name,a[i].roll,a[i].gpa);
}
}