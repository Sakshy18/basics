#include<bits/stdc++.h>
using namespace std;

//Comparing from 0 to n/2
void toupper(string s)
{
    for(int j=0;j<s.length();j++)
    {
        if(s[j]>='a' && s[j]<='z')
        {
            s[j]=s[j]+32;
        }
    }

}

int main()
{
    string s1;
    cin>>s1;   
    int n=s1.length();
    int flag=0;//ma am   //aksska
    toupper(s1);
    for(int i=0; i< n/2 ;i++)
    {
        if(s1[i]!=s1[n-i-1])
        {
            flag=0;
        }
        else{
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }


}