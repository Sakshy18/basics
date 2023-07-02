//find number of maximum handshake a person can have in a room given they can shake hands only once per person
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<(n*(n-1)/2)<<endl;
}