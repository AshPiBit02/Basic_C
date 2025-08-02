//WAP to enter name, roll no. & GPA of n student. And display them properly.
#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float GPA;
};
void main()
{
    
    struct student a[3];
    int i;
    
    for(i=0;i<3;i++)
    {
        printf("Enter name, roll no. & GPA\n");
        scanf("%s%d%f",&a[i].name,&a[i].roll,&a[i].GPA);
    }
    printf("\n Name \t Roll no. \t GPA");
    for(i=0;i<3;i++)
    {
        printf("\n%s\t\t%d\t\t%0.2f",a[i].name,a[i].roll,a[i].GPA);
    }
}