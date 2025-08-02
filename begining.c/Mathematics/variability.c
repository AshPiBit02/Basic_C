#include<stdio.h>
void main()
{
    int cov1,cov2,me1,me2,CV1,CV2;
    printf("Enter the standard deviation of Factory A & B:");
    scanf("%d%d",&cov1,&cov2);
    printf("Enter the mean of both factory A & B:");
    scanf("%d%d",&me1,&me2);
    CV1=(cov1/me1)*100;
    CV2=(cov2/me2)*100;
    if(CV2>CV1)
    {
        printf("Factory B has more variability.");
    }
    else{
        printf("Factory A has more variablility."); 
    }
}