#include<iostream>
#include<string>
using namespace std;

void convertPi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    char ch=s[0];
    string ans;
    if(s[0]=='p' && s[1]=='i')  //if pi in start to print nd then recruse for rest of string 
    {
        cout<<"3.14";
        convertPi(s.substr(2));
    }
    else{
        cout<<s[0];
        convertPi(s.substr(1));  //if not pi then we just print our first char and then recruve for rest of string
    }

}

int main()
{

    string s="pipxpsidpipxpi";
    convertPi(s);
}