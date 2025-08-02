#include<stdio.h>
void main()
{
    FILE *b;
    char name[100];
    char gender[100];
    int age,i,n;
    b=fopen("employees.txt","w");
    printf("Enter no of employees:");
    scanf("%d",&n);
    fprintf(b,"\nName\tGender\tAge\n");
    for(i=0;i<n;i++)
    {
        printf("Enter name, gender & age of %d employee: ",i+1);
        scanf("%s%s%d",&name,&gender,&age);
        fprintf(b,"\n%s\t%s\t%d",name,gender,age);
    }
    fclose(b);
}