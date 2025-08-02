#include<stdio.h>
struct result
{
    float roll_no,Nepali_marks,Maths_marks,Computer_marks;
    char name[200];
    float percent;
};
void main()
{
    struct result a[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Roll no.,name and marks in Nepali,Maths and Computer respectively:");
        scanf("%f%s%f%f%f",&a[i].roll_no,&a[i].name,&a[i].Nepali_marks,&a[i].Maths_marks,&a[i].Computer_marks);
        a[i].percent=(a[i].Nepali_marks+a[i].Maths_marks+a[i].Computer_marks)/3;
    }
    printf("\nRoll_no\tName\tMarks in Nepali\tMarks in Maths\tMarks in Computer");
    for(i=0;i<5;i++)
    {
        printf("\n%f\t%s\t%f\t%f\t%f\t%f",a[i].roll_no,a[i].name,a[i].Nepali_marks,a[i].Maths_marks,a[i].Computer_marks,a[i].percent);
    }
}