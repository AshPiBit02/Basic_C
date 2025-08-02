// #include<stdio.h>
// int fibo(int n);
// void main()
// {
//     int n;
//     printf("Enter the required value of term:");
//     scanf("%d",&n);
//     printf("The required value of term %d is %d",n,fibo(n));
// }
// int fibo(int n)
// {
//     if(n==1)
//     {
//         return 0;
//     }
//     else if(n==2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo(n-1)+fibo(n-2);
//     }

// }
// #include<stdio.h>
// int fiboseries(int n);
// int n;
// void main()
// {
//     printf("Enter the number of terms:");
//     scanf("%d",&n);
//     fiboseries(n);
// }
// int fiboseries(int n)
// {
//     int a=0,b=1,val,v;
//     printf("Enter the required value of term:");
//     scanf("%d",&val);
//     printf("%d\t%d\t",a,b);
//     for(int i=3;i<=n;i++)
//     {
//         int c=a+b;
//         printf("%d\t",c);
//         a=b;
//         b=c;
//         if(i==val)
//         {
//             v=c;
//         }
//     }
//     printf("\n%d",v);
// }

// #include<stdio.h>
// int i;
// #define loop for(i=1;i<=n;i++)
// int fibo(int n);
// void main()
// {
//     int n;
//     printf("Enter the required value of term:");
//     scanf("%d",&n);
//     loop
//     {
//     printf("%d\t",fibo(i));
//     }
// }
// int fibo(int n)
// {
//     if(n==1)
//     {
//         return 0;
//     }
//     else if(n==2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo(n-1)+fibo(n-2);
//     }
// }