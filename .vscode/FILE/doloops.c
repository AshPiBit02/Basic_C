#include<stdio.h>
void main()
{
    FILE *x;
    char name[100];
    int roll,n,i;
    x=fopen("studentss.txt","w");
    fprintf(x,"Name\tRoll no.");
    do{
        printf("Enter name & roll no.:\t");
        scanf("%s%d",&name,&roll);
        fprintf(x,"\n%s\t%d",name,roll);
        printf("Enter 1 to continue else enter any key:\t");
        scanf("%d",&n);
    }while(n==1);
    fclose(x);
}