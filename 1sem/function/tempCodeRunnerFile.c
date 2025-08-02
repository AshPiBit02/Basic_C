// WAP to define a function named fibo_series(int n) and display the fibonacci series upto nth term starting from 0.
// // using recursive function.
// #include <stdio.h>
// int fibo_series(int n);
// void main()
// {
//     int n;
//     printf("Enter required number of terms:");
//     scanf("%d", &n);
//     printf("The series is:\n");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\t", fibo_series(i));
//     }
// }
// int fibo_series(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo_series(n - 1) + fibo_series(n - 2);
//     }
// }