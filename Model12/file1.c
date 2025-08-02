#include<stdio.h>
void main()
{
    FILE *x;
    x=fopen("emp.txt","w");
    char name[100];
    char post;
    int id,n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name, ID and post of the employee:");
        scanf("%s%d%s",&name,&id,&post);
        fprintf(x,"\n%s\t%d\t%s",name,id,post);
    }
    fclose(x);
    x=fopen("emp.txt","r");
    printf("\n Name \t ID \t post");
    while(fscanf(x,"\n%s\t%d\t%s",&name,&id,&post)!=EOF)
    {
        printf("\n%s\t%d\t%d",name,id,post);
    }
    fclose(x);

}