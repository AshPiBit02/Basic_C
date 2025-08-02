#include<stdio.h>
void main()
{
    int n;
    int Bin_num[n],num=0;
    printf("Enter the number of Binary digits:");
    scanf("%d",&n);
    printf("Enter the Binary number:\n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&Bin_num);
        printf("%dBinary_num=%d",i,Bin_num[i]);
    }
}