// Create a structure for the following data, and write a program to input n students and display the records of the student of "Computer" faculty.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define loop for(i=0;i<n;i++)
struct date
{
    int year,month,day;
};
struct student
{
    int roll_no;
    char name[50],address[50],faculty[50];
    struct date DOB;
};
void main()
{
    int n,i,op,yn;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student std[n];
    begin:
    printf("1.Enter details of students.\n2.Display details of all students.\n3.Display details of computer faculty students.\n");
    printf("Enter your choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        loop
       {
        printf("Enter the rollno, name, address,faculty and the DOB(year month day) of student[%d]\n",i+1);
        scanf("%d%s%s%s%d%d%d",&std[i].roll_no,&std[i].name,&std[i].address,&std[i].faculty,&std[i].DOB.year,&std[i].DOB.month,&std[i].DOB.day);
       }
       break;
       case 2:
       printf("\nRoll_no\t\tName\t\tAddress\t\t\tFaculty\t\t\tDOB");
       loop
       {
           printf("\n%d\t\t%s\t\t%s\t\t%s\t\t%d-%d-%d",std[i].roll_no,std[i].name,std[i].address,std[i].faculty,std[i].DOB.year,std[i].DOB.month,std[i].DOB.day);
       }
       break;
       case 3:
       printf("\nRoll_no\t\tName\t\t\tAddress\t\t\tDOB");
       loop
       {
        if(strcmp(std[i].faculty,"computer")==0)
        {
            printf("\n%d\t\t%s\t\t%s\t\t%d-%d-%d",std[i].roll_no,std[i].name,std[i].address,std[i].DOB.year,std[i].DOB.month,std[i].DOB.day);
        }
       }
       break;
       default:
       printf("Invalid Selection\n");
       goto begin;
    }
    printf("\nDo you want to continue?\n If yes enter 1 else enter any key:");
    scanf("%d",&yn);
    if(yn==1)
    {
        goto begin;
    }
    else
    {
        exit(0);
    }
}