//given n string print unique string in lexographical order with their frew:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
      //  m[s]=m[s]+1; //increasing frew of string;
        m[s]++;
    }
    for(auto element:m)
    {
        cout<<element.first<<" "<<element.second<<endl;
        
    }

}