// WAP to create structure for the following data for a student(Rollno,name,phone,address and semester).Now create a file "student.txt" to store this record for a student.
#include<stdio.h>
struct student{
    int roll,sem;
    char nm[79];
    char phn[89];
    char add[90];
};
int main()
{
    int i,n;
    struct student a[n];
    FILE *x;
    x=fopen("student.txt","w");
    if(x==NULL)
    {
        printf("File doesn't exist!");
        return 0;
    }
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter roll_no,name,phone number,address and semester of student[%d]\n",i+1);
        scanf("%d%s%s%s%d",&a[i].roll,&a[i].nm,&a[i].phn,&a[i].add,&a[i].sem);
        fprintf(x,"%d\t%s\t%s\t%s\t%d\n",a[i].roll,a[i].nm,a[i].phn,a[i].add,a[i].sem);
    }
    fclose(x);
    x=fopen("student.txt","r");
    if(x==NULL)
    {
        printf("File doesn't exist!");
        return 0;
    }
    printf("The details of the students who are in first semester are:\n");
    printf("Roll_no\t\tName\t\tPhone_no\t\tAddress\t\tSemester\n");
    for(i=0;i<n;i++)
    {
        if(a[i].sem==1)
        {
            fscanf(x,"%d%s%s%s%d",&a[i].roll,&a[i].nm,&a[i].phn,&a[i].add,&a[i].sem);
        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n",a[i].roll,a[i].nm,a[i].phn,a[i].add,a[i].sem);
        }
    }
    fclose(x);
}