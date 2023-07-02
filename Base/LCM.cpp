#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int lcm=num1*num2;
    int maxi=max(num1,num2); //ex:5 and 6
    for(int i=maxi; i<=(num1*num2);i=i+maxi)  //running loop from 6 to 30 and 6 +6, aise interval me basicallly comparing all multipples of 6 with 5 
    {
        if(num1%i==0 && num2 % i ==0)
        {
            lcm=i;
        }
    }
    cout<<"lcm is "<<lcm<<endl;
}