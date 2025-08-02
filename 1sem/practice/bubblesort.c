// #include<stdio.h>
// #define loop1 for(i=0;i<n;i++)
// #define loop2 for(j=i+1;j<n;j++)
// void main()
// {
//     int n,i,j;
//     printf("Enter the number of integers in the array:");
//     scanf("%d",&n);
//     int num[n];
//     loop1
//     {
//         printf("Enter the array element[%d]:",i+1);
//         scanf("%d",&num[i]);
//     }
//     loop1
//     {
//         loop2
//         {
//             if(num[i]>num[j]) //for decending change the operator
//             {
//                 int temp=num[i];
//                 num[i]=num[j];
//                 num[j]=temp;
//             }
//         }
//     }
//     printf("The array in ascending order are : ");
//     loop1
//     {
//         printf("%d ",num[i]);
//     }

// }


#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the number of integers in array:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element[%d]:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]<num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("The elements of the array in decending order are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}