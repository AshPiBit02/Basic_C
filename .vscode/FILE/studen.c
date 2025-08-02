#include<stdio.h>
void main()
{
    FILE *a;
    char name [100];
    char gender[100];
    float GPA;
    int i;
    a=fopen("student.txt","w");
    printf("Name\tGender\tGPA");
    for(i=0;i<3;i++)
    {
        printf("Enter name, gender & GPA of students\t");
        scanf("%s%s%f",&name,&gender,&GPA);
        fprintf(a,"\n%s\t%s\t%0.2f",name,gender,GPA);
    }
    fclose(a);
}