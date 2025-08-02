// To enter two numbers and check whether they are equal or not.
#include<stdio.h>
void main ()
{
    int a,b;
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
    printf("Both numbers are equal.");
}
else{
    printf("The numbers aren't equal.  ");
}
}