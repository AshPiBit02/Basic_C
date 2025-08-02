#include<stdio.h>
void main()
{
    FILE *X;
    X=fopen("student.txt","r");
    char name[88];
    int roll;
    printf("\n Name \t roll no.");
    while(fscanf(X,"\n%s\t%d",&name,&roll)!=EOF)
    {
        printf("\n%s\t%d",name,roll);
    }
    fclose(X);
}