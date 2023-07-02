//replace 0 to 1 in a number
#include<iostream>
using namespace std;
int main()
{
    string num;
    cin>>num;
    for(int i=0;i<num.length();i++)
    {
        if(num[i]=='0')
        {
            num[i]='1';
        }
    }
    cout<<num<<endl;
}