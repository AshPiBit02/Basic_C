//WAP to enter name & GPA of 3 students and display the information in proper form.
#include<stdio.h>
struct result
{
    char name[100];
    float GPA;
};
void main()
{
    struct result a,b,c;
    printf("Enter name and GPA of 1st students\n");
    scanf("%s%f",&a.name,&a.GPA);
    printf("\nEnter name and GPA of 2nd student\n");
    scanf("%s%f",&b.name,&b.GPA);
    printf("\nEnter name and GPA of 3nd student\n");
    scanf("%s%f",&c.name,&c.GPA);
    printf("\nname \t\t\t\tGPA");
    printf("\n%s \t\t\t%0.2f",a.name,a.GPA);
    printf("\n%s \t\t\t%0.2f",b.name,b.GPA);
    printf("\n%s \t\t\t%0.2f",c.name,c.GPA);

}