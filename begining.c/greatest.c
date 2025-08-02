#include<stdio.h>
void main()
{
    int  a,b,c,d,e;
    printf("Enter any five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>b&&a>c&&a>d&&a>e)
    {
        printf("%d is greatest",a);
    }
    else if(b>c&&b>d&&b>e)
    {
        printf("%d is greatest",b);
    }
    else if(c>d&&c>e)
    {
        printf("%d is greatest",c);
    
    }
    else if(d>e)
    {
        printf("%d is greatest",d);
    }
    else{
        printf("%d is greatest",e);
    }
}