#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("student.txt","w");
    char name[100];
    int roll,n,i;
    float gpa;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter name,roll no. and gpa:");
        scanf("%s%d%f",&name,&roll,&gpa);
        fprintf(x,"\n%s\t%d\t%f",name,roll,gpa);
    }
    
    fclose(x);
    x=fopen("student.txt","r");
    while(fscanf(x,"%s%d%f",&name,&roll,&gpa)!=EOF)
    {
        if(gpa>2)
        {
        printf("\n%s\t%d\t%0.2f",name,roll,gpa);
        }
        else{

        }
    }
    fclose(x);
}