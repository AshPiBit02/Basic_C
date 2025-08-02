// Decimal to binary
#include<stdio.h>
#include<math.h>
void main()
{
    int n,first,second,third,fourth;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&num[i]);
        first=num[0]*pow(2,n-1);
        second=num[1]*pow(2,n-2);
        third=num[2]*pow(2,n-3);
        fourth=num[3]*pow(2,0);
    }
    printf("The decimal number is %d",first+second+third+fourth);
}