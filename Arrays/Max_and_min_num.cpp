//find max number in array and min number;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;

    int arr[n];
    int min=INT_MAX;
    int max=INT_MIN; 
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
        if(arr[i]>max)  //instead of this if we can check: Max=max(max,arr[i])  max is function nd Max is variable 
        {
            max=arr[i];
        }
         if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"max number is "<<max<<endl;
     cout<<"min number is "<<min<<endl;
}