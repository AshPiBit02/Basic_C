#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter any number:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
   i=i+1;
  a=a/i;
if(a!=0)
{


continue;
}
else{
  break;
}

       cout<<i<<endl;
    }
   
}