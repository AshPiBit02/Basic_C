#include<stdio.h>
void main()
{
    FILE *a;
    char name[50];
    int roll,i;
    a=fopen("employee.txt","w");
    fprintf(a,"\n Name \t Roll no.");
    do{
        printf("Enter name and roll:");
        scanf("%s%d",&name,&roll);
        fprintf(a,"\n%s\t%d",name,roll);
        printf("Enter 1 to continue else enter any key");
        scanf("%d",&i);
    }while(i==1);
    fclose(a);
}