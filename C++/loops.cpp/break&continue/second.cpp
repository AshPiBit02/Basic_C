#include<iostream>
using namespace std;
int main ()
{
    int salary;
   cin>>salary;
    for (int day=1;day<=60;day++)
    {
        if(day%5==0)
        {
            continue;
        }
        if(salary==0)
        {
            break;
        }
        cout<<"He can go no:"<<day<<endl;
        salary=salary-100;
    }
    return 0;

}