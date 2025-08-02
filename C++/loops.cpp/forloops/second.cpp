//To calculate the total pocket money, expenditure & saving.
#include<iostream>
using namespace std;
int main ()
{
    int d,sav,exp;
    cout<<"Enter the required no. of days of salary";
cin>>d;
int p=0;//p=total pocket money
for(int i=1;i<=d;i++)
{
    p=p+50;
   sav=sav+15;
}

exp=p-sav;
cout<<"Total pocketmoney is Rs."<<p<<endl;
cout<<"total saving is Rs."<<sav<<endl;
cout<<"Total expenditure is Rs."<<exp<<endl;
return 0;

}