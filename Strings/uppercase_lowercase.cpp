//compare 2 string nd tell if equal or not
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    // transform(s1.begin(),s1.end(), s1.begin(), ::toupper);  to make lowercase into uppercase
    // transform(s1.begin(),s1.end(), s1.begin(), ::tolower);  to make uppercase into lowercase
    cout<<s1<<endl;
    // for(int i=0;i<s1.size();i++)   //converting to uppercase using loop //as any small letter is greater than capital by 32 bits
    // {
    //     if(s1[i]>='a' && s1[i]<= 'z')  
    //     {
    //         s1[i]=s1[i]-32;
    //     }
    // }
    for(int i=0;i<s1.size();i++)   //converting to lowercase using loop //as any small letter is greater than capital by 32 bits
    {
        if(s1[i]>='A' && s1[i]<= 'Z')  
        {
            s1[i]=s1[i]+32;
        }
    }
    cout<<s1<<endl;


}
