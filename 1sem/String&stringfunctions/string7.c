// WAP to display as: 
// N
// NE  
// NEP
// NEPA
// NEPAL
// NEPA
// NEP
// NE
// N
#include<stdio.h>
#include<string.h>
void main()
{
   char st[]="NEPAL";
   int i,j,l=strlen(st);
   for(i=0;i<l;i++)
   {
    for(j=0;j<=i;j++)
    {
        printf("%c",st[j]);
    }
    printf("\n");
   }
   for(i=l-1;i>0;i--)
   {
    for(j=0;j<i;j++)
    {
        printf("%c",st[j]);
    }
    printf("\n");
   } 
}