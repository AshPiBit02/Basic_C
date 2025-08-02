#include<stdio.h>
// void main()
// {
//     int i,n,fact=1;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(i=n;i>1;i--)
//     {
//         fact*=i;
//     }
//     printf("The factorail is %d",fact);
// }

// void main()
// {
//     int n,fact=1;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     while (n>1)
//     {
//         fact*=n;
//         n--;
//     }
//     printf("The factorial is %d",fact);
// }

// void main()
// {
//     int n,fact=1;
//     printf("Enter any number:");
//     scanf("%d",&n);
//     do{
//         fact*=n;
//         n--;
//     }while(n>1);
//     printf("The factorail is %d",fact);
// }

// int fact(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);
//     }
// }
// void main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     printf("The factorial is %d",fact(n));
// }