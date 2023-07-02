#include<bits/stdc++.h>
using namespace std;

int fun(string s)
{
    int x,y=0;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='0')
      {
        x++;
      }
      else{
        y++;
      }
      if(x==y)
      {
        count++;
      }

    }
    if(x!=y)
        return -1;

    return count;    
}

int main()
{
    string s;
    cin>>s;
    cout<<fun(s);
    
}