#include<stdio.h>
int main()
{
    int n;
    int negno=0,posno=0;
    printf("Enter the number of Elements:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]>0)
        {
            posno++;
        }
        else if(num[i]<0)
        {
            negno++;
        }
    }
    printf("There are %d positive numbers\n",posno);
    printf("There are %d negitive numbers",negno);
    return 0;
}
