//multiple of any number upto nth term.
#include<iostream>
using namespace std;
int main ()
{
    int n,i,num;
    cout<<"Enter any number:";
    cin>>num;
    cout<<"Enter required term of multiple:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i*num<<endl;
    }
}