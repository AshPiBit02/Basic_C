// WAP to open a new file and read roll-no, name, address and phone number of students untill the user says "no"
//after reading the data, write it to the file then display the content of the file.
#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("student.txt","w");
    if(x=NULL)
    {
        printf("File not found!");
        exit(1);
    }
    int roll,i;
    int n;
    char name[100];
    char address[900];
    char phone[900];
    fprintf(x,"Roll_no\tName\tAddress\tPhone_no");
    do
    {
    printf("Enter Roll_no,name,address and phone number of student:");
    scanf("%d%s%s%s",&roll,&name,&address,&phone);
    fprintf(x,"\n%d\t%s\t%s\t%s",roll,name,address,phone);
    printf("Enter 1 to insert data of another student:");
    scanf("%d",&n);
    }while(n==1);
    fclose(x);
    x=fopen("student.txt","r");
    printf("\nRoll_no\tName\tAddress\tPhone_no");
    while(fscanf(x,"\n%d\t%s\t%s\t%s\t%s",&roll,&name,&address,&phone)!=EOF)
    {
        printf("\n%d\t%s\t%s\t%s",roll,name,address,phone);
    }
    fclose(x);
    
}