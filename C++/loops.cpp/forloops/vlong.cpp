#include<iostream>
using namespace std;
int main()
{
    int i,n,sqt,sq;
    cout<<"Enter the limit of number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%5==0)
        {
            i=i*i;
            cout<<i;
        }
        else if(i%2==0)
        {
            i=i*i;
        }

           
       
    }
    
}