#include<stdio.h>
void main()
{
   int a=7,i;
   for(i=1;i<=11;i++)
   {
    printf("%d ",a);
    if(a%2==0)
    {
        a=a/2;
    }
    else{
        a=a*3+1;
    }
   }

}