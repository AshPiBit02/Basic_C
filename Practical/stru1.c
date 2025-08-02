#include<stdio.h>
struct student
{
int roll,age;
char name[100];
};
void main()
{
    int i;
    struct student a[5];
    for(i=0;i<5;i++)
    {
        printf("Enter roll no, name and age:");
        scanf("%d%s%d",&a[i].roll,&a[i].name,&a[i].age);
    }
    printf("\n Roll_no \t Name \t Age");
    for(i=0;i<5;i++)
    {
       printf("\n%d\t%s\t%d",a[i].roll,a[i].name,a[i].age); 
    }
}