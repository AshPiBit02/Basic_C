#include<stdio.h>
struct student
{
char name[56];
int roll;
};
void main()
{
    struct student a[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter name and roll:");
        scanf("%s%d",&a[i].name,&a[i].roll);
    }
    printf("\n Name \t ROll no.");
    if(a[i].roll=3)
    {
        printf("\n%s\t%d",a[i].name,a[i].roll);
    }
    else
    {
        
    }
}