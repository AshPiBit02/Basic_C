//To determine the enter no. is divisible by 3and7 by not and also the result is postive or negative.
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n%3==0&&n%7==0)
    {
        if(n>0)
        {
            cout<<"The number is divisible and is positive";
        }
        else if(n<0)
        {
            cout<<"The number is divisible and is negative";
        }
        else{
            cout<<"The number is divisible and is neutral";
        }
    }
    else{
        cout<<"The number is not divisible by both number.";
    }

}