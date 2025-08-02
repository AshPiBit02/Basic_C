#include<stdio.h>
void main()
{
    FILE *r;
    char name[200];
    int roll,i;
    r=fopen("student.txt","w");
    for(i=0;i<2;i++)
    {
    printf("Enter name and rollno.:");
    scanf("%s%d",&name,&roll);
    fprintf(r,"\n%s\t%d",name,roll);
    }
    fclose(r);
}