//binod  s.length==0; return
#include<iostream>
#include<string>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)   //base case taking string till last then returning one one
    {
        return;
    }
    string ros=s.substr(1);   //substr will cut the string and give substring from 1st index ie binod becomes inod
    reverse(ros);
    cout<<s[0];


}
int main()
{
    string s;
    cin>>s;
    reverse(s);


}