// A file “staff.txt” contains id name and salary of 10 different staffs. Now WAP to copy all 
//these contents to a new file “employee.txt” after increasing the salary by 10%.
#include<stdio.h>
#include<stdlib.h>
#define loop for(i=0;i<n;i++)
int main()
{
    int n;
    printf("Enter the number of employess:");
    scanf("%d",&n);
    int i,id[n];
    float sal[n];
    char name[20][n];
    FILE *a;
    a=fopen("staff.txt","w");
    if(a==NULL)
    {
        printf("File doesn't exist!");
        exit(1);
    }
    fprintf(a,"ID\tName\tSalary\n");
    loop
    {
        printf("Enter the ID name and salary of staff[%d]\n",i+1);
        scanf("%d%s%f",&id[i],&name[i],&sal[i]);
        fprintf(a,"%d\t%s\t%.2f\n",id[i],name[i],sal[i]);
    }
    fclose(a);
    a=fopen("staff.txt","r");
    if(a==NULL)
    {
        printf("File doesn't exist!");
        exit(1);
    }
    FILE *x;
    x=fopen("employee.txt","w");
    if(x==NULL)
    {
        printf("File doesn't exist!");
        exit(1);
    }
    fprintf(x,"ID\tName\tSalary\n");
    loop
    {
        fscanf(a,"%d%s%f",&id[i],&name[i],&sal[i]);
        sal[i]+=(sal[i]*0.1);
        fprintf(x,"%d\t%s\t%.2f\n",id[i],name[i],sal[i]);
    }
    fclose(a);
    fclose(x);
}