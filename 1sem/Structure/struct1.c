// WAP to  delcare a structure with its members name,rollno,and marks. The program should ask the input for three students and display them.
#include<stdio.h>
struct student
{
    char name[50];
    int roll_no;
    float marks;
};
void main()
{
    int i,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student std[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name, roll no and marks of student[%d]:\n",i+1);
        scanf("%s%d%f",&std[i].name,&std[i].roll_no,&std[i].marks);
    }
    printf("\nName\tRoll no\tMarks\n");
    printf("-------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%.2f\n",std[i].name,std[i].roll_no,std[i].marks);
    }
}