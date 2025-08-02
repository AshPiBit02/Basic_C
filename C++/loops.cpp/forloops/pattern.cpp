#include<iostream>
using namespace std;
int main ()
{
    int n,i,a;
    cout<<"Enter the first no. of pattern:";
    cin>>a;
    cout<<"Enter required no. of terms:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<" "<<a;
        if(a%2==0)
        {
            a=(a/2);
        }
        else
        {
            a=a*3+1;
        }
    }
}