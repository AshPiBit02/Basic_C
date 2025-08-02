#include<stdio.h>
void main()
{
    int i=1,n,mul,sum=0;
    printf("Enter required no. of terms:");
    scanf("%d",&n);
    while(i<=n){
        mul=i*5;
        sum+=mul;
        printf("%d ",mul);
        i++;
    }
    printf("The sum of multiple is %d",sum);
}