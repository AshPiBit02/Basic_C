#include<stdio.h>
/*************  ✨ Codeium Command ⭐  *************/
/******  bb47fe6e-a79a-4163-ba39-8d0234ada41a  *******/
void main()
{
    int n[]={1,9,8,7,4,0};
    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-i-1;j++)
        if(n[j]>n[j+1])
        {
            int temp=n[j];
            n[j]=n[j+1];
            n[j+1]=temp;
        }
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",n[i]);
    }
}