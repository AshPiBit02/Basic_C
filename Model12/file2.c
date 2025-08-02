#include<stdio.h>
void main()
{
    int marks[5];
    int passed=0,failed=0;
    printf("Enter the marks of five students");
    for(int i=1;i<=5;i++)
    {
        printf("\nEnter the marks of student %d:",i);
        scanf("%d",&marks[i]);
    }
    for(int i=1;i<=5;i++)
    {
        if(marks[i]>=35)
        {
            passed++;
        }
        else
        failed++;
    }
    printf("The number of passed student is %d",passed);
    printf("\nThe number of failed student is %d",failed);
}