#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void printvec ( vector<pair<int,int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<"size is ->"<<v.size()<<endl;
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}

int main()
{
    vector<pair<int,int>> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    printvec(v1);

}