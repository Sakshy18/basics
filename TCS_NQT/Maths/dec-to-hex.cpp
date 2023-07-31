#include<bits/stdc++.h>
using namespace std;

string toHex(int num) {
        unsigned int n=num;
        string result;
        char hex[17]="0123456789abcdef";
        do
        {
            result=result+hex[n%16];
            n=n/16;

        }while(n);
        return {result.rbegin(),result.rend()};
    }

    int main()
    {
        int number;
        cout<<"enter num"<<endl;
        cin>>number;
        cout<<toHex(number);
    }