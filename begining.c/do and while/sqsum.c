#include<stdio.h>
void main()
{
    int i=1,n,sq,sum=0;
    printf("Enter the no required terms:");
    scanf("%d",&n);
    do{
        sq=i*i;
        sum+=sq;
        printf("%d ",sq);
        i++;
    }while(i<=n);
    printf("The sum of squares is %d",sum);
  
}