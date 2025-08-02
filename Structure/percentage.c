#include<stdio.h>
struct student{
    char name[100];
    float roll,p,c,m;
};
void main()
{
    int i;
    struct student a[3];
    for(i=0;i<3;i++)
    {
        printf("Enter name,rollno., and marks obtained in physics, chemisty and math respectively:");
        scanf("%s%d%f%f%f",&a[i].name,&a[i].roll,&a[i].p,&a[i].c,&a[i].m);
    }
    printf("\nName\tRoll no.\tPercentage");
    for(i=0;i<3;i++)
    {
        printf("\n%s\t%d\t%f",a[i].name,a[i].roll,(a[i].p+a[i].c+a[i].m)/3);
    }
}