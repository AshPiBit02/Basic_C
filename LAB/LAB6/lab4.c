// WAP using array to enter any ten integers and sort them in ascending order using bubble sort technique.
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}