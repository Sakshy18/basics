#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    int original_num=num;
    while(num>0)
    { 
        int lastdigit=num%10;
        int cube=pow(lastdigit,3);
        sum=sum + cube;
        num=num/10;
    }
    if(sum == original_num)
    {
        cout<<"armstrong number it is"<<endl;
    }
    else
    {
        cout<<"not an armstrong"<<endl;
    }
}