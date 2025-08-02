#include<stdio.h>
int area(int,int);
void main()
{
 int l,b;
 printf("Enter length and breadth:");
 scanf("%d%d",&l,&b);
 printf("%d is the area of the pound.",area(l,b));
}
int area(int l,int b)
{
    return l*b;
    
}
