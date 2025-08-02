// #include<stdio.h>
// int fact(int n);
// void main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,fact(n));
// }
// int fact(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     else if(n<0)
// {
//     return 0;
// }
//     else
//     {
//         return n*fact(n-1);
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int n,i=1;
//     int fact=1;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     do
//     {
//         fact*=i;
//         i++;
//     }while(i<=n)   ;

//     printf("The factorial is %d",fact);
// }

// #include<stdio.h>
// void main()
// {
//     int fact=1,i,n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     printf("The factorail is %d",fact);

// }

// #include<stdio.h>
// void main()
// {
//     int i=1,n,fact=1;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         fact*=i;
//         i++;
//     }
//     printf("The factorial is %d",fact);
// }

#include <stdio.h>
int fact(int n);
int n;
void main()
{
    printf("Enter the value of n:");
    scanf("%d", &n);
    fact(n);
}
int fact(int n)
{
    int f = 1;
    while (n > 1)
    {
        f *= n;
        n--;
    }
    printf("%d", f);
}