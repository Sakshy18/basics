#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void printvec ( vector<int> &v)
{
    
        cout<<"size is ->"<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

}

int main()
{
   
    int n;
    cin>>n;
    vector<vector<int>> v1;   //fixed size n ke arrays will be inside vector each array is an element of vector
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        vector<int>temp;  //temp vector of int
        for(int j=0;j<size;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);  //v[i] is array 
        }
        v1.push_back(temp);
       
    }
        for(int i=0;i<v1.size();i++)
        {
            printvec(v1[i]);
        }

}