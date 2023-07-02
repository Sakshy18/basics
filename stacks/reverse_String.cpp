//given string hi i am sakshi reverse it as sakshi am i hi
#include<bits/stdc++.h>
using namespace std;

void isreverse(string s)
{
stack<string> st;
for(int i=0;i<s.length();i++)
{
    string word="";
    while(s[i]!=' ' && i<s.length())
    {
        word=word+s[i];
        i++;
    }
    st.push(word);
}
while(!st.empty())  //jab tak st.epmty true nahi hai
{
    cout<<st.top()<<" ";
    
    st.pop();

}
cout<<endl;

}
int main()
{
    
    string s="hi i am sakshi";
    isreverse(s);
}