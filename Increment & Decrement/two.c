// // WAP to illustrate the use of unary minus and its output.
// #include<stdio.h>
// void main()
// {
//     // int x=11;
//     // printf("x=%d\n",x);
//     // printf("x=%d\n",--x);
//     // printf("x=%d\n",x--);
//     // printf("x=%d\n",x);
//     // printf("x=%d\n",++x);
//     // printf("x=%d\n",x--);
//     // printf("x=%d\n",x++);
//     // printf("x=%d\n",--x);
//     // printf("x=%d\n",x);

//     // int x=3,y=4,z;
//     // z=x++ + ++y + x-- - --y + ++x + y--;
//     // printf("%d %d %d",x,y,z);

//     // int a=5,b=10;
//     // int result=a++ * --b + ++a - b-- + a;
//     // printf("%d %d %d",a,b,result);

//     // int arr[]={10,20,30,40};
//     // int *p=arr;
//     // printf("%d %d %d",*(p++),*(++p),*(p--));
//     // the output must be 10 30 30 but it is 10 10 10

//     // int x=5;
//     // int y=(x++ & ++x)|(--x ^ x++);
//     // printf("%d",y);

//     // int a=2,b=3,c=4;
//     // int result=a++ * (--b + ++c)/(b-- - --a);
//     // printf("%d",result);
//     // // output will be undefined because of division by zero

//     // int i=1;
//     // while(i++<5)
//     // {
//     //     printf("%d ",i);
//     // }
// }
// #include<stdio.h>

// void test(int x)
// {
//     printf("%d\n",x);
// }
// void main()
// {
//     int a=5;
//     test(a++);
//     test(++a);
//     test(a--);
//     test(--a);
    
// }

#include<stdio.h>
void recursivefunction(int x)
{
    if(x>0)
    {
        recursivefunction(x--);
        printf("%d ",x);
    }
}
void main()
{
    recursivefunction(3);
}