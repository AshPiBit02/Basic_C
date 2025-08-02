#include<iostream>
using namespace std;
int main ()
{
     int a;
     cout<<"Enter any number:";
     cin>>a;
     if(a==1||a==2){
        cout<<"1&2 are neither prime or composite.";
     }
       for(int i=3;i<=a;i++)
     {
       if(a%i==0)
     {
        cout<<a<<" is composite number."<<endl;

     }
       else 
     {
        cout<<a<<" is prime number. "<<endl;
    }
   break;
}

}
