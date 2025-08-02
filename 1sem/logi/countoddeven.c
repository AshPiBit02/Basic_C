#include<stdio.h>
void main()
{
    int n,odd_count=0,even_count;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("There are %d odd elements.",odd_count);
    printf("\nThere are %d odd elements.",even_count);

}