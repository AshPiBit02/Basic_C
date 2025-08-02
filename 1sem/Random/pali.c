#include<stdio.h>
void main()
{
    int num,orginal,reverse=0,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    orginal=num;
    do
    {
        rem=num%10;
        reverse=(reverse*10)+rem;
        num/=num;
    } while (num==0);
    if(orginal==reverse)
    {
        printf("%d is Palindrome",orginal);
    }
    else
    {
        printf("%d is not palindrome",orginal);
    }
    
}