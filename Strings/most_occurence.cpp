//find the alphabet in a word that has most occurence:
//"idempotentt"  //t comes thrice so we keep an array of freq[26] //26 for 26 alphabets and maintain freq of each alphabet in it
// traverse string and find har letter ka freq add it to freq[] and then traverse freq and checck which has greated count that is ans
//it only gives whatever letter it finds first eg if e also had 3 occurences so output would be e, as e would come first in arr[freq[]]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;   //initializing each letter's freq as 0';
    }
    for(int i=0;i<s1.size();i++)
    {
        freq[s1[i] - 'a' ]++;  
        //we r increasing freq from 0 by 1 here s[i] gives the letter - a gives number eg:b-a==1 to count at freq[1] is getting increased

    }
    int max_freq=0;
    char ans='a';
    for(int i=0;i<26;i++)
    {
        if(freq[i]>=max_freq)
        {
            max_freq=freq[i];
            ans=i+'a';
            
        }

    }
    cout<<ans<<" "<<max_freq<<endl;
    
}