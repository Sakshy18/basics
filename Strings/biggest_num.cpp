//find the biggest number u can make from a string of numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    //logic: biggest number is nothing but sorted numbers in descending order
    sort(s1.begin(), s1.end(), greater<int>());
    cout<<s1;
}