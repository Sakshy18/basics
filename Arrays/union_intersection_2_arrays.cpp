#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
    int m,n;   //2 -3 5 -2 8    
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        map1[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
        map1[arr2[i]]++;
    }
    for(auto x: map1)
    {
       cout << x.first << "->" <<
               x.second <<endl;
    }   
    cout<<map1.size()<<endl;
   

}