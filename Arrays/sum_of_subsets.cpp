#include<bits/stdc++.h>
using namespace std;

void subsetsum(int arr[],int l, int r, int sum=0)
{
    if(l>r)
    {
        cout<<sum<<" ";
        return ;

    }
    subsetsum(arr,l+1,r,sum+arr[l]);
    subsetsum(arr,l+1,r,sum);
    
}

int main()
{
    int arr[3]={4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]); 
    subsetsum(arr,0,n-1,0);
}