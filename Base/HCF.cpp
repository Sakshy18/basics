//hcf is highest common divisor of 2 nos
//eg: hcf of 48 and 36 is 12:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;

    while(num1 != num2)
    {
        if(num1>num2)
        {
            num1=num1-num2;
        }
        else
        {
            num2=num2-num1;
        }
    }
    cout<<num1;
}
