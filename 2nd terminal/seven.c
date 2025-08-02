#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("aashish.txt","w");
    char name[44];
    int roll,n;
    do{
        printf("Enter name and rollno.:");
        scanf("%s%d",&name,&roll);
        fprintf(x,"\n%s\t%d",name,roll);
        printf("Enter 0 to continue or enter any key:");
        scanf("%d",&n);
    }while(n==0);
    fclose(x);
    x=fopen("aashish.txt","r");
    printf("\n Name \t Roll no.");
    while(fscanf(x,"\n%s\t%d",&name,&roll)!=EOF)
    {
        printf("\n%s\t%d",name,roll);
    }
    fclose(x);


}