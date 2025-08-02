// to print even number upto nth term.
#include<iostream>
using namespace std;
int main ()
{
    int i,n,c=2;
    cout<<"Enter any number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<c<<" ";
        c=c+2;
    }
}