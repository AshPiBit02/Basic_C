// To find the greatest among five numbers. 

#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>b&&a>c&&a>d&&a>e)
    {
        cout<<a<<"is the greatest number"<<endl;
   
    }
    else if(b>c&&b>d&&b>e) 
    {
        cout<<b<<"is the greatest number"<<endl;
    }
    else if(c>d&&c>e)
    {
        cout<<c<<"is the greatest number"<<endl;
    }
    else if(d>e)
    {
        cout<<d<<"is the greatest number"<<endl;
    }
    else{
        cout<<e<<"is the greatest number"<<endl;
    }
    return 0;
}