//checking every buuble and swapping if left is not less than right; 
//isme u get largest number pehle'
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;    //1 19 2 13 4    
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-i;j++)
       {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
       }

    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

}