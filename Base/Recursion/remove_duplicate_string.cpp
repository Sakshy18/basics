//remove all duplicates from a string eg:aaeedhhfbffn -> aedhfbn
#include<iostream>
#include<string>
using namespace std;

string removedup(string s)
{
   
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    
    string ros=removedup(s.substr(1));

    if(ch==ros[0])
    {
        return ros;
    }
    
    return (ch+ros);
    

}

int main()
{
    string s="aabbccddrr";
    cout<<removedup(s);

}