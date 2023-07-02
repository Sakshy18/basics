#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int find)
{
    int lower=0;
    int upper=n;
    int mid=lower+(upper-1)/2;
    while(upper>=lower){
    if(find==arr[mid])
    {
        return mid;
    }
    else if(find>arr[mid])
    {
        lower=mid+1;
    }
    else
    {
        upper=mid-1;
    }
    }
    return -1;

}

int main()
{   int n;
    cin>>n;
    int find;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    
    cout<<"enter number you want to find:"<<endl;
    cin>>find;
    int result = binarysearch(arr,n,find);
    cout<<result<<endl;

}