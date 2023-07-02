#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;   //2 -3 5 -2 8    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pivot=0;
    int i=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}