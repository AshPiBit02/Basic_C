#include<iostream>
using namespace std;
int main ()
{
    float m,r,v,T; //T is tension  horizontal circular motion.
    cout<<"Enter mass of particle:";
    cin>>m;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"Enter velocity:";
    cin>>v;
    T=(m*v*v)/r;
    cout<<"Tension of the particle in horizontal circular motion is "<<T<<"N";
}
