//given year as input output if year is leap or not
#include<bits/stdc++.h>
using namespace std;

bool leapyear(int year)
{
    if(year%4==0 || year%400 ==0 && year % 100 !=0)
    {
        return true;
    }

    return false;
}

int main()
{
    int year;
    cout<<"enter year"<<endl;
    cin>>year;
    cout<<leapyear(year);
}