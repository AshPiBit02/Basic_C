#include<stdio.h>
void main ()
{
    int a,b,c,d,e,f,per;
    printf("Enter the marks of six subjects");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

  
    if(a>=27 && b>=27 && c>=27 && d>=27 && e>=27 && f>=27 )
    {
        printf("The student is pass");
    }
    else{
        printf("The student is fail");
    }
       
}