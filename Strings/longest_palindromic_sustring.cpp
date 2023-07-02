#include<bits/stdc++.h>
using namespace std;


void printstr(string s, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        cout<<s[i];
    }

}
void longestpal(string s)
{
    int start=0;   //iterator or first starting index of substring
    int end=1;  //length of longest substring   //end index of longest substring
   
    int l,h;
   
    for(int i=1;i<s.length();i++)
    {
        //even length substring
        l=i-1;
        h=i;
        
        while(l>=0 && h< s.length() && s[l]==s[h])   //abaaccaasd
        {
            if(h-l+1 > end)  //length of current substring greater than previous
            {
            start=l;
            end=h-l+1;
            }
            l--;
            h++;
        }

        //odd subsrting
        l=i-1;
        h=i+1;
        
        while(l>=0 && h< s.length() && s[l]==s[h])   //abaaccaasd
        {
            if(h-l+1 > end)  //length of current substring greater than previous
            {
            start=l;
            end=h-l+1;
            }
            l--;
            h++;
        }
    }
    printstr(s,start,start+end-1);
}
int main()
{
    string s;
    cin>>s;    
    
    longestpal(s);
    //printstr(s,start,n);

}