#include<stdio.h>
void main()
{
    int i=1,n,mul,sum=0;
    printf("Enter required no. of terms:");
    scanf("%d",&n);
    do{
        mul=i*5;
        sum+=mul;
        printf("%d ",mul);
        i++;
    }while(i<=n);
    printf("The sum of the multiple is %d",sum);
}