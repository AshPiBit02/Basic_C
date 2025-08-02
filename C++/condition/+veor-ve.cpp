#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if (n>0)
    {
        cout<<n<<" is positve number";
    }
    else if(n<0)
    {
        cout<<n<<" is negative number";
    }
    else 
    {
        cout<<n<<" is neutal number";
    }
}