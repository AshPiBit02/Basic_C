//WAP to enter roll, name and mark of three subjects and display .
#include<stdio.h>
struct student{
    char name[200];
    int roll;
    float phy,che,math;
};
void main()
{
    int i;
    struct student a[3];
    for(i=0;i<3;i++)
    {
        printf("Enter name,roll, and mark obtained in physics, chemistry, and math respectively:");
        scanf("%s%d%f%f%f",&a[i].name,&a[i].roll,&a[i].phy,&a[i].che,&a[i].math);
    }
    printf("\nName\tRollno.\tPhysics\tChemistry\tMathematics");
    for(i=0;i<3;i++)
    {
        if(a[i].phy>=30 && a[i].che>=30 && a[i].math>=30)
        {
            printf("\n%s\t%d\t%f\t%f\t%f",a[i].name,a[i].roll,a[i].phy,a[i].che,a[i].math);
        }
        else
        {
            printf("\n%s\t%d\t%s\t%s\t%s\t%s",a[i].name,a[i].roll,"NG","NG","NG");
        }
    }
}