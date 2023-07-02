//find kth max and minimum element of an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int k;
    cin>>k;
    sort(arr,arr+n);  //syntax to sort
    cout<<arr[k-1]<<endl;   //for kth min element
    // cout<<arr[-k]<<endl;

}

//mini heap approach:
// priority_queue<int, vector<int>,greater<int>>p;
// for(int i=0;i<n;i++)
// {
//     p.push[a[i]];
// }
// int ans,i=1;
// while(p!=empty())
// {
//     if(i==k)
//     {
//         ans=p.top()   //top ka element hi maxx hoga as nahi hua to we r popping it; //k number tak aney tak we r popping

//     }
//     i++;
//     p.pop();
// }
// cout<<ans;

