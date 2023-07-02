#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {10,20,30,25};
    vector <int> :: iterator itr=v1.begin();
    for(itr=v1.begin(); itr!=v1.end(); ++itr)  //printing vector using iterator
    {
        cout<<(*itr)<<" ";
    }
    cout<<endl;
     vector<pair<int,int> >v2 = {{1,2},{2,3},{4,6}};
    vector<pair<int,int> >:: iterator itr2;
    for(itr2=v2.begin(); itr2!=v2.end(); ++itr2)  //printing vector using iterator
    {
        cout<<"first ->"<<(*itr2).first<<" "<<"second->"<<(*itr2).second<<endl;
    } //(itr2->first) instead of (*itr2).first
    for(int value:v1)  //here copy is happening if u want to changegive ref ie &value:v
    {
        cout<<value<<" ";  //does the same work to print v1;
    }
    cout<<endl;

    // for(pair<int,int> value:v2 )  //these are called range based loops
    // {
    //     cout<<value.first<<" "<<value.second<<" ";
    //       cout<<endl;
    // }
    // cout<<endl;

    // for(auto i:v1)
    // {
    //     cout<<i<<endl;

    // }
    for(auto value:v2)
    {
        cout<<value.first<<" "<<value.second<<" ";
        cout<<endl;
    }
// vector <int> :: iterator itr=v1.begin(); dont have to write this.
    for(auto it=v1.begin(); it!=v1.end();++it)
    {
        cout<<(*it)<<" ";
    }
}