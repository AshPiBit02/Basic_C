#include<iostream>
using namespace std;
int main ()
{
    int i,n,sum,sq;
    cout<<"Enter any number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        cout<<sq<<" ";
       
        sum+=i*i;
    }
    
    cout<<endl<<"The sum is:"<<sum;
    
  

}