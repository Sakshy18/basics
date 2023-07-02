#include<bits/stdc++.h>
using namespace std;

void sub(string ans, int i, int length, string s)
{
    if(i==length)
    {
        cout<<ans<<endl;
    }
else{
    sub(ans,i+1,length,s);
    ans=ans+s[i];
    sub(ans,i+1,length,s);


}
  
    
}
int main()
{
    string s;
    cin>>s;
    string ans=" ";
    sub(ans,0,s.length(),s);

}