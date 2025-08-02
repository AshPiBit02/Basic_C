// // Fibo value term
// #include<stdio.h>
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
// void main()
// {
//     int n;
//     printf("Enter the required value term:");
//     scanf("%d",&n);
//     printf("The %dth term value is %d",n,fibo(n));
// }


//Fibo series
// #include<stdio.h>
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
// void main()
// {
//     int n,i;
//     printf("Enter the required number of terms:");
//     scanf("%d",&n);
//     printf("The fibonacci terms are: ");
//     for(i=1;i<=n;i++)
//     {
//         printf("%d ",fibo(i));
//     }
// }

// #include<stdio.h>
// int num(int n)
// {
//     if(n&1)
//     {
//         printf("Odd");
//     }
//     else
//     {
//         printf("Even");
//     }
// }
// void main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     num(n);
    
// }

// #include<stdio.h>
// void main()
// {
//     int x,y,lar;
//     printf("Enter any two numbers:\n");
//     scanf("%d%d",&x,&y);
//     lar=x>y?x:y;
//     printf("The largest number is %d",lar);
// }